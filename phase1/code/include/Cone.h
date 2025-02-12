#include <vector>
#ifndef CONE_H
#define CONE_H 

class Cone{
    private:
        float radius;
        float height;
        std::vector<float> vertices;
        std::vector<unsigned int> indices;
    public:
        Cone();
        Cone(float,float);
        void generateCone(float,float,int,int);
        float getRadius();
        float getHeight();
        std::vector<float>& getVertices();
        std::vector<unsigned int>& getIndices();
        void save(const char *);
        void load(const char *);
};

#endif