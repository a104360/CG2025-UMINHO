#ifndef SPHERE_H
#define SPHERE_H
#include "Figure.h"

class Sphere : public Figure{
    private:
        float radius;
    public:
        Sphere();
        Sphere(int);
        /// @brief Generates the vertices and faces of the sphere
        /// @param  radius 
        /// @param  slices 
        /// @param  stacks
        void generateSphere(int,int,int);
        float getRadius();
        std::vector<float>& getVertices();
        std::vector<unsigned int>& getIndices();
        void save(const char *);
        void load(const char *);
};

#endif