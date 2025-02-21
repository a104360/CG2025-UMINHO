#include "../include/Cone.h"
#include <cmath>
#include <fstream>
#include <iostream>

Cone::Cone(){
    radius = 0;
    height = 0;
    this->type = "cone";
}

Cone::Cone(float radius,float height){
    this->radius = radius;
    this->height = height;
    this->type = "cone";
}

void Cone::generateCone(float radius, float height, int slices, int stacks) {
    this->vertices.clear();
    this->indices.clear();

    // Store the top vertex first (index 0)
    vertices.push_back(0);
    vertices.push_back(height);
    vertices.push_back(0);

    // Store bottom center vertex (index 1)
    vertices.push_back(0);
    vertices.push_back(0);
    vertices.push_back(0);

    float stackHeight = height / stacks;
    
    // Generate vertices for each stack
    for(int i = 0; i <= stacks; i++) {
        float y = height - (i * stackHeight);
        float stackRadius = (radius * i) / stacks;  // Radius gets larger as we go down
        
        for(int j = 0; j < slices; j++) {
            float theta = (2 * M_PI * j) / slices;
            
            float x = stackRadius * cos(theta);
            float z = stackRadius * sin(theta);
            
            vertices.push_back(x);
            vertices.push_back(y);
            vertices.push_back(z);
        }
    }

    // Generate indices for the side faces
    for(int i = 0; i < stacks; i++) {
        int stackStart = 2 + (i * slices);  // +2 for top and bottom center vertices
        int nextStackStart = stackStart + slices;
        
        for(int j = 0; j < slices; j++) {
            int current = stackStart + j;
            int next = stackStart + ((j + 1) % slices);
            int nextStackCurrent = nextStackStart + j;
            int nextStackNext = nextStackStart + ((j + 1) % slices);
            
            // For the first stack, connect to top vertex
            if(i == 0) {
                indices.push_back(0);  // Top vertex
                indices.push_back(current);
                indices.push_back(next);
            }
            
            // Connect stack vertices
            indices.push_back(current);
            indices.push_back(nextStackCurrent);
            indices.push_back(next);
            
            indices.push_back(next);
            indices.push_back(nextStackCurrent);
            indices.push_back(nextStackNext);
        }
    }
    
    // Generate indices for the base (bottom circle)
    int lastStack = 2 + (stacks * slices);  // Start index of last stack vertices
    for(int i = 0; i < slices; i++) {
        indices.push_back(1);  // Bottom center vertex
        indices.push_back(lastStack + ((i + 1) % slices));
        indices.push_back(lastStack + i);
    }
}

float Cone::getRadius(){
    return this->radius;
}

float Cone::getHeight(){
    return this->height;
}


std::vector<float>& Cone::getVertices(){
    return this->vertices;
}

std::vector<unsigned int>& Cone::getIndices(){
    return this->indices;
}

void Cone::save(const char * filename){
    std::ofstream file(filename);
    if(file.is_open()){

        saveType(file);

        file << radius << '\n';
        file << height << '\n';

        saveVectors(file);

        /*
        file << this->vertices.size() << '\n';
        file << this->indices.size() << '\n';
        
        for(float f : this->vertices){
            file << f << " ";
        }
        file << '\n';
        
        for(unsigned int n : indices){
            file << n << " ";
        }
        */
        file.close();
        
    } else {
        std::cerr << "Erro no ficheiro";
    }
}

void Cone::load(const char * filename){
    std::ifstream file(filename);
    if(file.is_open()){
        
        vertices.clear();
        indices.clear();

        loadType(file);

        file >> radius;
        file >> height;

        loadVectors(file);
        /*
        size_t vertSize,indiSize;
        file >> vertSize;
        file >> indiSize;
        
        float vertValue;
        for(size_t i = 0;i < vertSize;i++){
            file >> vertValue;
            this->vertices.push_back(vertValue);
        }
        
        unsigned int indiValue;
        for(size_t i = 0;i < indiSize;i++){
            file >> indiValue;
            indices.push_back(indiValue);
        }
        */
        
        file.close();
    } else {
        std::cerr << "Erro no ficheiro";
    }
}