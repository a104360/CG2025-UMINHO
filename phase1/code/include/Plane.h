#include <vector>
#ifndef PLANE_H
#define PLANE_H
#include "Figure.h"

class Plane: public Figure{
    private:
        int length;
        int divisions;
    public:
        //std::vector<float> vertices;
        //std::vector<unsigned int> indices;
        Plane(int,int);
        Plane();
        int getLength();
        int getDivisions();
        void generatePlane(int,int);
        void save(const char *);
        void load(const char *);
        void debug();
};

#endif