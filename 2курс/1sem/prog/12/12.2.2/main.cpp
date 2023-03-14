#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <cmath>
#include <vector>
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480


static void Drow(void)
{
         glRotatef(45, 1., 0., 0.);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.3, -0.5, 0.0);
    glVertex3f(0.0, -1.0, 0.0);
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
