#include "../include/Plane.h"
#include <GL/glut.h>

#include <math.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

Plane::Plane(int length,int divisions){
    this->length = length;
    this->divisions = divisions;
    generatePlane(length,divisions);
}

Plane::Plane(){
    this->length = 0;
    this->divisions = 0;
}

int Plane::getLength(){
    return this->length;
}

int Plane::getDivisions(){
    return this->divisions;
}

void Plane::generatePlane(int length, int divisions) {
    float unit = (float)length / divisions;
    int pointsOnEdge = divisions + 1;
    
    // Use float for precise vertex positions
    for(float i = -(length/2.0f); i <= (length/2.0f + 0.0001f); i += unit) {
        for(float j = -(length/2.0f); j <= (length/2.0f + 0.0001f); j += unit) {
            vertices.push_back(i);
            vertices.push_back(0);
            vertices.push_back(j);
        }
    }

    // Generate indices as before
    for(int i = 0; i < divisions; i++) {
        for(int j = 0; j < divisions; j++) {
            int currentVertex = i * pointsOnEdge + j;
            
            indices.push_back(currentVertex);
            indices.push_back(currentVertex + pointsOnEdge);
            indices.push_back(currentVertex + pointsOnEdge + 1);
            
            indices.push_back(currentVertex);
            indices.push_back(currentVertex + pointsOnEdge + 1);
            indices.push_back(currentVertex + 1);
        }
    }
    
    /*
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    for(size_t i = 0; i < indices.size(); i += 3) {
        float* v1 = &vertices[indices[i] * 3];
        float* v2 = &vertices[indices[i + 1] * 3];
        float* v3 = &vertices[indices[i + 2] * 3];

        glVertex3fv(v1);
        glVertex3fv(v2);
        glVertex3fv(v3);
    }
    glEnd();
    */
}


void Plane::save(const char * filename){
    std::ofstream file(filename);
    if(file.is_open()){
        file << length << '\n';
        file << divisions << '\n';
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

void Plane::load(const char * filename){
    std::ifstream file(filename);
    if(file.is_open()){
        file >> length;
        file >> divisions;
        int num;
        bool firstVector = true;
        while(file>>num){
            if(file.peek() == '\n')
            {
                firstVector = false;
                file.ignore();
                continue;
            }
            if(firstVector) vertices.push_back(num);
            else indices.push_back(num);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file";
    }
}