#include "Ponto.h"



struct ponto{
    float x;
    float y;
    float z;
};


Ponto newPonto(float x,float y,float z){
    Ponto p = new struct ponto;
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
}

float getX(Ponto p){
    return p->x;
}


float getY(Ponto p){
    return p->y;
}


float getZ(Ponto p){
    return p->z;
}