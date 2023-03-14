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

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int angle = 0;

static void Drow(void)
{
    glEnable(GL_LIGHTING); //включаем освещение
glEnable(GL_LIGHT0); //включаем источник света №0
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glLoadIdentity();


//glpushMatrix;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.2f, 0.5f, 0.8f);
glTranslatef(0,0,2);
glutSolidCone(2,3,10,10);   //Конус
//glPopmatrix;
glFlush ();
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(WINDOW_WIDTH,WINDOW_HEIGHT);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glEnable(GL_DEPTH_TEST);

    glutCreateWindow("GLUT LAB");
    glutDisplayFunc(Drow);

    glutMainLoop();

    return EXIT_SUCCESS;
}
