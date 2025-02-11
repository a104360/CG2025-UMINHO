#ifndef PLANE_H
#define PLANE_H
#include <vector>

class Plane{
    private:
        int length;
        int divisions;
        std::vector<float> vertices;
        std::vector<unsigned int> indices;
    public:
        Plane(int,int);
        Plane();
        int getLength();
        int getDivisions();
        void generatePlane(int,int);
        void save(const char *);
        void load(const char *);
};

#endif