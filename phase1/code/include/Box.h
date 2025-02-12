#include <vector>
#ifndef BOX_H
#define BOX_H
#include "Figure.h"

class Box : public Figure{
    private:
        int length;
        int division;
    public:
        //std::vector<float> vertices;
        //std::vector<unsigned int> indices;
        Box();
        Box(int,int);
        int getLength();
        int getDivisions();
        void generateBox(int,int);
        void load(const char *);
        void save(const char *);
};

#endif