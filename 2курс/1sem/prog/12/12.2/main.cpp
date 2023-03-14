
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <cmath>
#include <vector>

/* Program entry point */

#define PI 3.14159265
#define R 0.2
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
float shift = 0.;
static void Drow(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glTranslatef(-0.5f,0.0f,-0.9f);
glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.2, 0.3);
    glVertex3f(-0.4, 0.0, 0.0);
    glVertex3f(0.4, -0.5, 0.7);
    glVertex3f(0.1, -1.0, 0.4);
    glVertex3f(-0.5, -1.0, 0.4);
    glEnd();

float theta;
    float xscale = (WINDOW_HEIGHT*1.0)/WINDOW_WIDTH;
    float Rx = R*xscale;
    glTranslatef(1.75f,0.4f,0.0f);
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; ++i)
    {
        theta = i*PI/180;
        glVertex2f(Rx*cos(theta) +shift - 0.4, R*sin(theta)+ 0.4);
    }
    glEnd ();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(WINDOW_WIDTH,WINDOW_HEIGHT);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT LAB");
    glutDisplayFunc(Drow);

    glutMainLoop();

    return EXIT_SUCCESS;
}
