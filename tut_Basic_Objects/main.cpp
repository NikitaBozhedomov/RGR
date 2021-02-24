#include "drawlib.h"

void renderScene(void);

int main(int argc, char* argv[])
{
	initForest();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("OpenGL Start Application");
	glutDisplayFunc(renderScene);
	glutTimerFunc(1000 / 60, animateScene, 1);
	startTime = clock();
	glutMainLoop();
	return 0;
}


void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 

	Draw();

    glutSwapBuffers(); 
}
