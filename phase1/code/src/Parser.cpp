#include "../include/Parser.h"
#include "../include/Figure.h"
#include "../include/tinyxml2.h"
#include "../include/Plane.h"
#include "../include/Cone.h"
#include "../include/Box.h"
#include "../include/Sphere.h"
#include <iostream>
#include <fstream>

struct window{
    int width;
    int height;
};

struct position{
    float x;
    float y;
    float z;
};

struct lookAt{
    float x;
    float y;
    float z;
};

struct up{
    float x;
    float y;
    float z;
};

struct projection{
    float fov;
    float near;
    float far;
};

struct camera{
    struct position * position;
    
    struct lookAt * lookAt;
    
    struct up * up;
    
    struct projection * projection;
};

struct models{
    std::vector<Figure*> * figures;
};

struct world{
    Window * window;
    Camera * camera;
    Models * models;
};

std::string getFigureType(const char * filename){
	std::string t = "";
	std::ifstream file(filename);
	if(file.is_open()){
		file >> t;
		file.close();
		return t;
	} else {
		std::cerr << "File error" << std::endl;
		return "";
	}
	return "";
}


World * parseFile(const char * filename){
    using namespace tinyxml2;
    XMLDocument document;

    if(document.LoadFile(filename) != XML_SUCCESS){
        std::cerr << "Error when reading file!" << std::endl;
        return nullptr; 
    }

    // The file was read and loaded the data structure to memory

    XMLElement * world = document.FirstChildElement("world");
    if(!world){
        std::cerr << "<world> tag not found!" << std::endl;
        return nullptr;
    }
    
    XMLElement * window = world->FirstChildElement("window");
    Window * windowStruct = new struct window;
    if(window){
        windowStruct->width = window->IntAttribute("width");
        windowStruct->height = window->IntAttribute("height");
        std::cout << "Window : " << windowStruct->width << "x" << windowStruct-> height << std::endl; 
    } else {
        windowStruct->width = 500;
        windowStruct->height = 500;
        std::cout << "Window : " << windowStruct->width << "x" << windowStruct-> height << std::endl; 
    }

    XMLElement * camera = world->FirstChildElement("camera");
    Position * pos = NULL; 
    LookAt * l = NULL; 
    Up * u = NULL; 
    Projection * proj = NULL; 
    if(camera){
        // Parse the position
        pos = new struct position;
        XMLElement * position = camera->FirstChildElement("position");
        if(position){
            pos->x = position->FloatAttribute("x",0);
            pos->y = position->FloatAttribute("y",0);
            pos->z = position->FloatAttribute("z",0);
            std::cout << "Camera Position: (" << pos->x << ", " << pos->y << ", " << pos->z << ")" << std::endl;
        } 
        
        l = new struct lookAt;
        XMLElement * lookAt = camera->FirstChildElement("lookAt");
        if(lookAt){
            l->x = lookAt->FloatAttribute("x",0);
            l->y = lookAt->FloatAttribute("y",0);
            l->z = lookAt->FloatAttribute("z",0);
            std::cout << "Camera LookAt: (" << l->x << ", " << l->y << ", " << l->z << ")" << std::endl;
        }
        
        u = new struct up;
        XMLElement * up = camera->FirstChildElement("up");
        if(up){
            u->x = up->FloatAttribute("x",0);
            u->y = up->FloatAttribute("y",1);
            u->z = up->FloatAttribute("z",0);
            std::cout << "Camera Up: (" << u->x << ", " << u->y << ", " << u->z << ")" << std::endl;
        }  
        
        proj = new struct projection;
        XMLElement * projection = camera->FirstChildElement("projection");
        if(projection){
            proj->fov = projection->FloatAttribute("fov",45.0f);
            proj->near = projection->FloatAttribute("near",0.1f);
            proj->far = projection->FloatAttribute("far",100.0f);
            std::cout << "Projection: FOV=" << proj->fov << ", Near=" << proj->near << ", Far=" << proj->far << std::endl;
        }
    }
    Camera * cam = new struct camera;
    cam->position = pos;
    cam->lookAt = l;
    cam->up = u;
    cam->projection = proj;
    XMLElement * group = world->FirstChildElement("group");
    Models * mod = new struct models;
    mod->figures = new std::vector<Figure*>(); // Initialize the vector pointer
    if(group){
        XMLElement * models = group->FirstChildElement("models");
        if(models){
            for(XMLElement * model = models->FirstChildElement("model");model;model = model->NextSiblingElement("model")){
                std::string type = getFigureType(model->Attribute("file"));
                if(type == "plane"){
                    Plane * p = new Plane();
                    p->load(model->Attribute("file"));
                    mod->figures->push_back(p);
                } 
                if(type == "box"){
                    Box * b = new Box();
                    b->load(model->Attribute("file"));
                    mod->figures->push_back(b);
                }
                if(type == "cone"){
                    Cone * c = new Cone();
                    c->load(model->Attribute("file"));
                    mod->figures->push_back(c);
                }
                if(type == "sphere"){
                    Sphere * s = new Sphere();
                    s->load(model->Attribute("file"));
                    mod->figures->push_back(s);
                }
            
            }
        }
    }

    World * w = new struct world();
    w->window = windowStruct;
    w->camera = cam;
    w->models = mod;
    return w;
}   


std::vector<Figure *> * getFigures(World * w){
    return w->models->figures;
}

/*
int main(int argc, char ** argv){
    try
    {
        World * w = parseFile(argv[1]);
        for (size_t i = 0; i < w->models->figures->size(); i++)
        {
            std::cout << "Figure " << i << std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
*/