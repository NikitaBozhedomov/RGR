#ifndef DRAWLIB_H
#define DRAWLIB_H
//#include <GL/glut.h>
#include <vector>
#define _USE_MATH_DEFINES
#include "GL/freeglut.h"
#include <ctime>
#include <cmath>

struct Figure {
	float r, g, b;
	float x, y;
	float r1, g1, b1;
	float r2, g2, b2;
	float r3, g3, b3;
};

extern clock_t curTime, startTime;

void drawCat(Figure f);
void drawHouse(Figure f);
void drawUFO(Figure f);
void drawTree(Figure f);
void drawSky(Figure f);
void drawGround();
void drawSaynotodrugs(Figure f);
void animateScene(int value);
void drawForest();
void initForest();
void Draw();

#endif
