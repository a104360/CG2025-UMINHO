#include <vector>
#ifndef BOX_H
#define BOX_H 

class Box{
    private:
        int length;
        int division;
    public:
        std::vector<float> vertices;
        std::vector<unsigned int> indices;
        Box();
        Box(int,int);
        int getLength();
        int getDivisions();
        void generateBox(int,int);
        void load(const char *);
        void save(const char *);
};

#endif