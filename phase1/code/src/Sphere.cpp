#include "../include/Sphere.h"
#include <cmath>
#include <iostream>
#include <fstream>

Sphere::Sphere(){
    this->radius = 0;
    this->type = "sphere";
    Figure();
}

Sphere::Sphere(int radius){
    this->radius = radius;
    this->type = "sphere";
    Figure();
}

void Sphere::generateSphere(int radius, int slices, int stacks) {
    // First we clear the vertices and indices that may be stored in memory
    this->vertices.clear();
    this->indices.clear();

    // The height of a stack is the division of the diameter by the number of stacks
    //float stackHeight = 2.0f * radius / stacks;
    float stackArch = M_PI / stacks;

    for(int i = 0;i <= stacks;i++){
        float alpha = M_PI_2 - (i*stackArch);
        float y = radius * sin(alpha);
        float stackRadius = sqrt(pow(radius,2) - pow(y,2));

        for(int j = 0; j < slices; j++) {
            float theta = (2.0f * M_PI * j) / slices;

            float x = stackRadius * cos(theta);
            float z = stackRadius * sin(theta);

            vertices.push_back(x);
            vertices.push_back(y);
            vertices.push_back(z);
        }
    }

    /*
    // We are generating the vertices of each stack
    for(int i = 0; i <= stacks; i++) {
        // y is the radius subtracted by the amount of stackHeight
        float y = radius - (i * stackHeight);
        // The stack radius is calculated with Pythagorean Theorem
        float stackRadius = sqrt(pow(radius,2) -  pow(y,2));

        for(int j = 0; j < slices; j++) {
            float theta = (2.0f * M_PI * j) / slices;

            float x = stackRadius * cos(theta);
            float z = stackRadius * sin(theta);

            vertices.push_back(x);
            vertices.push_back(y);
            vertices.push_back(z);
        }
    }*/

    // Generate the indices for the faces
    for(int i = 0; i < stacks; i++) {
        int stackStart = (i * slices);
        int nextStackStart = stackStart + slices;

        for(int j = 0; j < slices; j++) {
            int current = stackStart + j;
            int next = stackStart + ((j + 1) % slices);
            int nextStackCurrent = nextStackStart + j;
            int nextStackNext = nextStackStart + ((j + 1) % slices);

            // Top cap
            if(i == 0) {
                indices.push_back(current);
                indices.push_back(next);
                indices.push_back(nextStackCurrent);
            }
            // Bottom cap
            else if(i == stacks - 1) {
                indices.push_back(current);
                indices.push_back(nextStackCurrent);
                indices.push_back(next);
            }

            // Body faces - we don't want to generate these for the last stack
            if(i < stacks - 1) {
                // First triangle
                indices.push_back(current);
                indices.push_back(nextStackCurrent);
                indices.push_back(next);
                
                // Second triangle
                indices.push_back(next);
                indices.push_back(nextStackCurrent);
                indices.push_back(nextStackNext);
            }
        }
    }
}


float Sphere::getRadius(){
    return this->radius;
}

std::vector<float>& Sphere::getVertices(){
    return this->vertices;
}

std::vector<unsigned int>& Sphere::getIndices(){
    return this->indices;
}

void Sphere::save(const char * filename){
    std::ofstream file(filename);
    if(file.is_open()){

        saveType(file);

        file << radius << '\n';

        saveVectors(file);

       
        file.close();
        
    } else {
        std::cerr << "Erro no ficheiro";
    }

}

void Sphere::load(const char * filename){
    std::ifstream file(filename);
    if(file.is_open()){
        
        vertices.clear();
        indices.clear();

        loadType(file);

        file >> radius;

        loadVectors(file);
        
        file.close();
    } else {
        std::cerr << "Erro no ficheiro";
    }
}