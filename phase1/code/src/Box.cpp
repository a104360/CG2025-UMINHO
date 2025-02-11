#include "../include/Box.h"
#include <fstream>
#include <iostream>

Box::Box(){
    length = 0;
    division = 0;
}

Box::Box(int lenght,int division){
    this->length = lenght;
    this->division = division;
    generateBox(this->length,this->division);
}

int Box::getDivisions(){
    return this->division;
}


int Box::getLength(){
    return this->length;
}

void Box::generateBox(int length, int divisions) {
    float unit = (float)length / divisions;
    float halfLen = length/2.0f;
    int pointsOnEdge = divisions + 1;
    int pointsOnFace = pointsOnEdge * pointsOnEdge;

    // Generate vertices for all faces
    // Front and Back faces (Z-fixed)
    for(float z : {-halfLen, halfLen}) {
        for(float x = -halfLen; x <= (halfLen + 0.0001f); x += unit) {
            for(float y = -halfLen; y <= (halfLen + 0.0001f); y += unit) {
                vertices.push_back(x);
                vertices.push_back(y);
                vertices.push_back(z);
            }
        }
    }

    // Left and Right faces (X-fixed)
    for(float x : {-halfLen, halfLen}) {
        for(float z = -halfLen; z <= (halfLen + 0.0001f); z += unit) {
            for(float y = -halfLen; y <= (halfLen + 0.0001f); y += unit) {
                vertices.push_back(x);
                vertices.push_back(y);
                vertices.push_back(z);
            }
        }
    }

    // Top and Bottom faces (Y-fixed)
    for(float y : {-halfLen, halfLen}) {
        for(float x = -halfLen; x <= (halfLen + 0.0001f); x += unit) {
            for(float z = -halfLen; z <= (halfLen + 0.0001f); z += unit) {
                vertices.push_back(x);
                vertices.push_back(y);
                vertices.push_back(z);
            }
        }
    }

    // Generate indices for each face
    for(int face = 0; face < 6; face++) {
        int faceOffset = face * pointsOnFace;
        
        for(int i = 0; i < divisions; i++) {
            for(int j = 0; j < divisions; j++) {
                int currentVertex = faceOffset + (i * pointsOnEdge + j);
                
                // First triangle
                indices.push_back(currentVertex);
                indices.push_back(currentVertex + pointsOnEdge);
                indices.push_back(currentVertex + pointsOnEdge + 1);
                
                // Second triangle
                indices.push_back(currentVertex);
                indices.push_back(currentVertex + pointsOnEdge + 1);
                indices.push_back(currentVertex + 1);
            }
        }
    }
}


void Box::save(const char * filename){
    std::ofstream file(filename);
    if(file.is_open()){
        file << length << '\n';
        file << division << '\n';

        file << vertices.size() << '\n';
        file << indices.size() << '\n';

        for(float f : vertices){
            file << f << " ";
        }
        file << '\n';
        for(unsigned int n : indices){
            file << n << " ";
        }
        file.close();
    } else {
        std::cerr << "Erro no ficheiro";
    }
}


void Box::load(const char * filename){
    std::ifstream file(filename);
    if(file.is_open()){

        vertices.clear();
        indices.clear();

        file >> length;
        file >> division;

        size_t vertSize, indiSize;
        file >> vertSize;
        file >> indiSize;
        
        float vertValue;
        for(size_t i = 0; i < vertSize; i++){
            file >> vertValue;
            vertices.push_back(vertValue);
        }

        unsigned int indiValue;
        for(size_t i = 0;i < indiSize;i++){
            file >> indiValue;
            indices.push_back(indiValue);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file";
    }
}