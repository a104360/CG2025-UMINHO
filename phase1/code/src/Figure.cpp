#include "../include/Figure.h"
#include <fstream>
#include <iostream>

void Figure::loadType(std::ifstream& file){
    type = "";
    file >> type;
}


void Figure::loadVectors(std::ifstream& file){

    // Read vector sizes
    size_t vertSize, indiSize;
    file >> vertSize;
    file >> indiSize;

    // Read vertices
    float vertValue;
    for(size_t i = 0; i < vertSize; i++){
        file >> vertValue;
        this->vertices.push_back(vertValue);
    }

    // Read indices
    unsigned int indiValue;
    for(size_t i = 0;i < indiSize;i++){
        file >> indiValue;
        this->indices.push_back(indiValue);
    }

}

void Figure::saveType(std::ofstream& file){
    file << type << '\n';
}


void Figure::saveVectors(std::ofstream& file){

    // Write number of vertices and indices first
    file << this->vertices.size() << '\n';
    file << this->indices.size() << '\n';

    // Write vertices with full precision
    for(float f : this->vertices){
        file << f << " ";
    }
    // Separation of the vectors
    file << '\n';
    // Write indices
    for(unsigned int n : this->indices){
        file << n << " ";
    }
    
}