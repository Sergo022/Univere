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

/* Program entry point */

static void Drow(void)
{
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.9, 0.9);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.9, -0.9);
    glVertex2f(0.9, -0.9);
    glVertex2f(0.9,0.9);
    glEnd ();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.3,0.3);
    glVertex2f(0.3, -0.3);
    glVertex2f(-0.3, 0.3);
    glVertex2f(-0.3, -0.3);
    glEnd ();



    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT LAB");
    glutDisplayFunc(Drow);


    glutMainLoop();

    return EXIT_SUCCESS;
}
