#include "../include/Box.h"
#include <fstream>
#include <iostream>

Box::Box(){
    length = 0;
    division = 0;
    this->type = "box";
}

Box::Box(int lenght,int division){
    this->length = lenght;
    this->division = division;
    this->type = "box";
    generateBox(this->length,this->division);
}

int Box::getDivisions(){
    return this->division;
}


int Box::getLength(){
    return this->length;
}

void Box::generateBox(int length, int divisions) {
    vertices.clear();
    indices.clear();

    // Unit is the edge length of a division
    float unit = (float)length / divisions;
    float halfLen = length/2.0f;
    int pointsOnEdge = divisions + 1;
    int pointsOnFace = pointsOnEdge * pointsOnEdge;

    // Generate vertices for all faces
    // Front and Back faces (Z-fixed)
    // Front face (Z = halfLen)
    for(float x = -halfLen; x <= (halfLen + 0.0001f); x += unit) {
        for(float y = -halfLen; y <= (halfLen + 0.0001f); y += unit) {
            vertices.push_back(x);
            vertices.push_back(y);
            vertices.push_back(halfLen);
        }
    }
    // Back face (Z = -halfLen)
    for(float x = -halfLen; x <= (halfLen + 0.0001f); x += unit) {
        for(float y = -halfLen; y <= (halfLen + 0.0001f); y += unit) {
            vertices.push_back(x);
            vertices.push_back(y);
            vertices.push_back(-halfLen);
        }
    }

    // Left and Right faces (X-fixed)
    // Left face (X = -halfLen)
    for(float z = -halfLen; z <= (halfLen + 0.0001f); z += unit) {
        for(float y = -halfLen; y <= (halfLen + 0.0001f); y += unit) {
            vertices.push_back(-halfLen);
            vertices.push_back(y);
            vertices.push_back(z);
        }
    }
    // Right face (X = halfLen)
    for(float z = -halfLen; z <= (halfLen + 0.0001f); z += unit) {
        for(float y = -halfLen; y <= (halfLen + 0.0001f); y += unit) {
            vertices.push_back(halfLen);
            vertices.push_back(y);
            vertices.push_back(z);
        }
    }

    // Top and Bottom faces (Y-fixed)
    // Top face (Y = halfLen)
    for(float x = -halfLen; x <= (halfLen + 0.0001f); x += unit) {
        for(float z = -halfLen; z <= (halfLen + 0.0001f); z += unit) {
            vertices.push_back(x);
            vertices.push_back(halfLen);
            vertices.push_back(z);
        }
    }
    // Bottom face (Y = -halfLen)
    for(float x = -halfLen; x <= (halfLen + 0.0001f); x += unit) {
        for(float z = -halfLen; z <= (halfLen + 0.0001f); z += unit) {
            vertices.push_back(x);
            vertices.push_back(-halfLen);
            vertices.push_back(z);
        }
    }

    // Generate indices for each face
    for(int face = 0; face < 6; face++) {
        int faceOffset = face * pointsOnFace;
        
        for(int i = 0; i < divisions; i++) {
            for(int j = 0; j < divisions; j++) {
                int currentVertex = faceOffset + (i * pointsOnEdge + j);
                
                // Opposing faces are drawn in opposing directions
                switch(face) {
                    case 1: // Back face - CW
                    case 3: // Right face - CW
                    case 4: // Bottom face - CW
                    // First triangle
                    indices.push_back(currentVertex);
                    indices.push_back(currentVertex + pointsOnEdge);
                    indices.push_back(currentVertex + pointsOnEdge + 1);
                    
                    // Second triangle
                    indices.push_back(currentVertex);
                    indices.push_back(currentVertex + pointsOnEdge + 1);
                    indices.push_back(currentVertex + 1);
                    break;
                    
                    case 0: // Front face - CCW
                    case 2: // Left face - CCW
                    case 5: // Top face - CCW
                    // First triangle
                        indices.push_back(currentVertex);
                        indices.push_back(currentVertex + pointsOnEdge + 1);
                        indices.push_back(currentVertex + pointsOnEdge);
                        
                        // Second triangle
                        indices.push_back(currentVertex);
                        indices.push_back(currentVertex + 1);
                        indices.push_back(currentVertex + pointsOnEdge + 1);
                        break;
                }
            }
        }
    }
}


void Box::save(const char * filename){
    std::ofstream file(filename);
    if(file.is_open()){
        saveType(file);

        file << length << '\n';
        file << division << '\n';

        saveVectors(file);
        
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
        
        loadType(file);
        
        file >> length;
        file >> division;

        loadVectors(file);

        file.close();
    } else {
        std::cerr << "Unable to open file";
    }
}