#include <vector>
#include "Figure.h"
#ifndef PARSER_H
#define PARSER_H

typedef struct window Window;

typedef struct camera Camera;

typedef struct lookAt LookAt;

typedef struct position Position;

typedef struct up Up;

typedef struct projection Projection;

typedef struct models Models;

typedef struct world World;

World * parseFile(const char *);

std::vector<Figure *> * getFigures(World *);

std::string getFigureType(const char *);

int getWindowWidth(world *);

int getWindowHeight(World *);

#endif