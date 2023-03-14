/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <cmath>

/* Program entry point */

#define PI 3.14159265
#define R 0.9
#define WINDOW_WIDTH 940
#define WINDOW_HEIGHT 480

static void Drow(void)
{
    float theta;

    float xscale = (WINDOW_HEIGHT*1.0)/WINDOW_WIDTH;
    float Rx = R*xscale;
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; i+=30){
        theta = i*PI/180;
        glVertex2f(Rx*cos(theta), R*sin(theta));
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
