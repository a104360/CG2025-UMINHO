#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include "../include/Plane.h"
#include "../include/Box.h"
#include "../include/Cone.h"


int main(int argc, char* argv[]) {
    
    if (argc < 5 || argc > 7) {
        std::cerr << "Usage: \n"
         << argv[0] << " plane <size> <divisions> <output_file>\n"
         << argv[0] << " box <length> <divisions> <output_file>\n"
         << argv[0] << " cone <radius> <height> <slices> <stacks> <output_file>\n"
         << argv[0] << " sphere <radius> <slices> <stacks> <output_file>" << std::endl;
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
    if(type.compare("cone") == 0){
        float radius = std::stof(argv[2]);
        float height = std::stof(argv[3]);
        int slices = std::stoi(argv[4]);
        int stacks = std::stoi(argv[5]);

        Cone * c = new Cone(radius,height);
        c->generateCone(radius,height,slices,stacks);

        c->save(argv[6]);

        return 0;
    }
    if(type.compare("sphere")){
        
        return 0;
    }
    std::cerr << "Error: Only plane type is supported" << std::endl;
    return 1;


    return 0;
}