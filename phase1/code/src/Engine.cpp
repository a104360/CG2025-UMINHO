#include <GL/glut.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <math.h>
#include "../include/Engine.h"

float angleY = M_PI / 2;
float angleZ = 0;
float radius = sqrt(75);
float centerX = 0;
float centerY = 0;
float centerZ = 0;
float tX = 2;
float tY = 2;
float tZ = 2;

Plane * p = nullptr;

Box * b = nullptr;

Cone * c = nullptr;

void drawPlane(Plane p){
	float unit = (float) p.getLength() / p.getDivisions();
    int pointsOnEdge = p.getDivisions() + 1;
    
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    for(size_t i = 0; i < p.indices.size(); i += 3) {
        float* v1 = &p.vertices[p.indices[i] * 3];
        float* v2 = &p.vertices[p.indices[i + 1] * 3];
        float* v3 = &p.vertices[p.indices[i + 2] * 3];
		
        glVertex3fv(v1);
        glVertex3fv(v2);
        glVertex3fv(v3);
    }
    glEnd();
}

void drawBox(Box b){
	float unit = (float) b.getLength() / b.getDivisions();
	int pointsOnEdge = p->getDivisions() + 1;
	
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);
	for(size_t i = 0;i < b.indices.size();i+=3){
		float* v1 = &b.vertices[b.indices[i] * 3];
		float* v2 = &b.vertices[b.indices[i + 1] * 3];
		float* v3 = &b.vertices[b.indices[i + 2] * 3];
		
		glVertex3fv(v1);
		glVertex3fv(v2);
		glVertex3fv(v3);
	}
	glEnd();
}


void drawCone(Cone c){
	std::vector<float> vertices = c.getVertices();
	std::vector<unsigned int> indices = c.getIndices();

	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);
	for(size_t i = 0;i < indices.size();i+=3){
		float* v1 = &vertices[indices[i] * 3];
		float* v2 = &vertices[indices[i + 1] * 3];
		float* v3 = &vertices[indices[i + 2] * 3];
		
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


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    
    // Position camera
    gluLookAt(tX + (radius * cos(angleY)),tY + (radius * sin(angleZ)), tZ + (radius * sin(angleY)), 
		      centerX,centerY,centerZ,
			  0.0f,1.0f,0.0f);

    // Draw the plane

    if(p != nullptr) drawPlane(*p);
	if(b != nullptr) drawBox(*b);
	if(c != nullptr) drawCone(*c);

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


void rotate(int key_code,int x,int y){
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


void normal(unsigned char key,int x,int y){
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
		centerY += 0.05f;
		break;
	case 'q':
		centerY -= 0.05f;
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



int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <model_file>" << std::endl;
        return 1;
    }

    p = new Plane();
    //p->load(argv[1]);

	b = new Box();
	//b->load(argv[1]);

	c = new Cone();
	c->load(argv[1]);

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