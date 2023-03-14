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
#include <vector>

/* Program entry point */

#define PI 3.14159265
#define R 0.5
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

static void Drow(void)
{
    float theta;
    glColor3f(0.5, 0.8, 0.0);
    float xscale = (WINDOW_HEIGHT*1.0)/WINDOW_WIDTH;
    float Rx = R*xscale;
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; ++i){
        theta = i*PI/180;
        glVertex2f(Rx*cos(theta) - 0.4, R*sin(theta) + 0.4);
    }
    glEnd ();

    glBegin(GL_POLYGON);
    glColor3f(85.0/255, 37.0/255, 134.0/255);

    glVertex3f(0.3, 0.3, 0.0);
    glColor3f(186.0/255, 53.0/255, 156.0/255);

    glVertex3f(0.5, 0.0, 0.0);
    glColor3f(128.0/300, 79.0/255, 179.0/255);

    glVertex3f(0.8, -0.5, 0.0);
    glColor3f(153.0/255, 105.0/255, 199.0/255);

    glVertex3f(0.5, -1.0, 0.0);
    glColor3f(181.0/100, 107.0/155, 114.0/155);

    glVertex3f(0.0, -0.7, 0.5);

   glEnd ();

    glBegin(GL_POLYGON);
    glColor3f(181.0/200, 137.0/500, 214.0/400);

    glVertex3f(1.0, 0.2, 0.0);
    glColor3f(183.0/700, 145.0/700, 167.0/700);

    glVertex3f(0.5, 0.0, 0.2);
    glColor3f(28.0/500, 79.0/500, 59.0/500);

    glVertex3f(0.1, 0.0, 0.1);
    glColor3f(153.0/300, 105.0/300, 199.0/300);

    glVertex3f(0.1, 0.5, 0.9);
    glColor3f(81.0/190, 37.0/190, 14.0/190);

    glVertex3f(0.9, 1.0, 1.0);

    glEnd();

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
