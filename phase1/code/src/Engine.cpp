#include <GL/glut.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <math.h>
#include "../include/Engine.h"

float angleX = 0;
float angleY = M_PI / 2;
float angleZ = 0;

float radius = sqrt(75);

float centerX = 0;
float centerY = 0;
float centerZ = 0;

float tX = 0;
float tY = 0;
float tZ = 0;

float rX = 0;
float rY = 0;
float rZ = 0;

float sY = 1.0f;

int lastX = -1;
int lastY = -1;


Plane * p = nullptr;

Box * b = nullptr;

Cone * c = nullptr;

Sphere * s = nullptr;

void drawFigure(Figure b){
	srand(time(0));
    
    glBegin(GL_TRIANGLES);
    for(size_t i = 0; i < b.indices.size(); i += 3){
        float* v1 = &b.vertices[b.indices[i] * 3];
        float* v2 = &b.vertices[b.indices[i + 1] * 3];
        float* v3 = &b.vertices[b.indices[i + 2] * 3];
        
        // Generate random values for a, b, and c (between 0 and 1)
        float a = static_cast<float>(rand()) / RAND_MAX;
        float b = static_cast<float>(rand()) / RAND_MAX;
        float c = static_cast<float>(rand()) / RAND_MAX;

        glColor3f(a, b, c);
        glVertex3fv(v1);
        glVertex3fv(v2);
        glVertex3fv(v3);
    }
    glEnd();
}


void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window with zero width).
	if(h == 0)
		h = 1;

	// compute window's aspect ratio 
	float ratio = w * 1.0 / h;

	// Set the projection matrix as current
	glMatrixMode(GL_PROJECTION);
	// Load Identity Matrix
	glLoadIdentity();
	
	// Set the viewport to be the entire window
    glViewport(0, 0, w, h);

	// Set perspective
	gluPerspective(45.0f ,ratio, 1.0f ,1000.0f);

	// return to the model view matrix mode
	glMatrixMode(GL_MODELVIEW);
}

void drawAxis(){
	// Draw coordinate axes
    glBegin(GL_LINES);
    // X axis (red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    // Y axis (green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);
    // Z axis (blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 1.0f);
    glEnd();
}

void display() {
	// clear buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// set the camera
	glLoadIdentity();
	// Camera position is now calculated based on angles and radius
    float eyeX = radius * cos(angleY);
    float eyeY = radius * sin(angleZ);
    float eyeZ = radius * sin(angleY);
    
    gluLookAt(eyeX, eyeY, eyeZ,  // Fixed camera position
              centerX, centerY, centerZ,  // Movable center point
              0.0f, 1.0f, 0.0f);

    // Draw the plane
	
    drawAxis();

	glTranslatef(tX,tY,tZ);	
	glRotatef(angleX,rX,rY,rZ);
	glScalef(1.0f,sY,1.0f);
		
    if(p != nullptr) drawFigure(*p);
	if(b != nullptr) drawFigure(*b);
	if(c != nullptr) drawFigure(*c);
	if(s != nullptr) drawFigure(*s);


    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (float)w/h, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}


// write function to process keyboard events

void fill(){
	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
}
void line(){
	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
}

void point(){
	glPolygonMode(GL_FRONT_AND_BACK,GL_POINT);
}

void rotate(int key_code,int,int){
	switch (key_code)
	{
	case GLUT_KEY_LEFT:
		angleY += 0.02f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 0.02f;
		break;
	case GLUT_KEY_UP:
		angleZ += 0.02f;
		break;
	case GLUT_KEY_DOWN:
		angleZ -= 0.02f;
		break;
	
	default:
		break;
	}
	if(angleY > 2 * M_PI) angleY -= 2 * M_PI;
	glutPostRedisplay();
}


void normal(unsigned char key,int,int){
	switch (key)
	{
	case '1':
		fill();
		break;
	case '2':
		line();
		break;
	case '3':
		point();
		break;
	case 'w':
		centerZ -= 1.0f;
		tZ -= 1.0f;
		break;
	case 's':
		centerZ += 1.0f;
		tZ += 1.0f;
		break;
	case 'd':
		centerX += 1.0f;
		tX += 1.0f;
		break;
	case 'a':
		centerX -= 1.0f;
		tX -= 1.0f;
		break;
	case 'e':
		angleX += 1.0f;
		rY += 1.0f;
		break;
	case 'q':
		angleX -= 1.0f;
		rY -= 0.05f;
		break;
	case 'i':
		tY += 1.0f;
		break;
	case 'k':
		tY -= 1.0f;
		break;
	case 'u':
		sY += 1.0f;
		break;
	case 'j':
		sY -= 1.0f;
		break;
	case '+':
		radius -= 0.05f;
		break;
	case '-':
		radius += 0.05f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

void moveCamera(int x,int y){
	if(lastX == -1) {
        lastX = x;
        lastY = y;
        return;
    }
    
    // Calculate deltas
    float deltaX = (x - lastX) * 0.01f;
    float deltaY = (y - lastY) * 0.01f;
    
    // Update center point based on mouse movement
    centerX += deltaX;
    centerY -= deltaY;  // Inverted Y for more natural feel
    
    // Update last positions
    lastX = x;
    lastY = y;
    
    glutPostRedisplay();
}

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


int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <model_file>" << std::endl;
        return 1;
    }
	size_t filenameSize = strlen(argv[1]);
	if(argv[1][filenameSize - 3] != '.' || argv[1][filenameSize - 2] != '3' || argv[1][filenameSize - 1] != 'd'){
		std::cerr << "File is not valid. The file must be a .3d file." << std::endl;
		return 2;
	}
	
	srand((unsigned)time(NULL));

	std::string type = getFigureType(argv[1]);
	if(type == "plane"){
		p = new Plane();
		p->load(argv[1]);
	} 
	if(type == "box"){
		b = new Box();
		b->load(argv[1]);
	}
	if(type == "cone"){
		c = new Cone();
		c->load(argv[1]);
	}
	if(type == "sphere"){
		s = new Sphere();
		s->load(argv[1]);
	}

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Plane Viewer");

    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutSpecialFunc(rotate);
	glutKeyboardFunc(normal);

    glutPostRedisplay();


    glutMainLoop();
    return 0;
}