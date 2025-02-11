#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include "../include/Plane.h"
#include "../include/Box.h"


int main(int argc, char* argv[]) {
    
    if (argc != 5) {
        std::cerr << "Usage: " << argv[0] << " plane <size> <divisions> <output_file>" << std::endl;
        return 1;
    }

    std::string type = argv[1];
    if(type.compare("plane") == 0){
        float size = std::stof(argv[2]);
        int divisions = std::stoi(argv[3]);
        
        Plane * p = new Plane(size,divisions);
        
        p->save(argv[4]);
        
        return 0;
    }
    if(type.compare("box") == 0){
        float size = std::stof(argv[2]);
        int divisions = std::stoi(argv[3]);

        Box * b = new Box(size,divisions);

        b->save(argv[4]);

        return 0;
    }
    if(type.compare("cone")){
        
        return 0;
    }
    if(type.compare("sphere")){
        
        return 0;
    }
    std::cerr << "Error: Only plane type is supported" << std::endl;
    return 1;


    return 0;
}