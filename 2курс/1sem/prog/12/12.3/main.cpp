
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
#define PI 3.14159265
#define R 0.1
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

float shift = 0.;

static void Drow(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    float theta;
    glTranslatef(0.5f,0.0f,0.5f);
    glColor3f(1.0, 0.7, 0.0);
    float xscale = (WINDOW_HEIGHT*1.0)/WINDOW_WIDTH;
    float Rx = R*xscale;
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; ++i)
    {
        theta = i*PI/180;
        glVertex2f(Rx*cos(theta) +shift - 0.4, R*sin(theta)+ 0.4);
    }
    glEnd ();

glTranslatef(-0.62f,0.23f,-0.9f);
  glRotatef(45, 1., 1., 1.);
glBegin(GL_QUADS);
glColor3f(0.8,0.2,0.1);
glVertex3f(-0.2f, 0.15f, 0.0f);
glVertex3f( 0.2f, 0.15f, 0.0f);
glColor3f(0.3,0.6,0.2);
glVertex3f( 0.2f,-0.1f, 0.0f);
glVertex3f(-0.2f, -0.1f, 0.0f);
glEnd();


 glTranslatef(-0.12f,-0.1f,0.8f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0.2,0.5);
    glVertex3f( 0.0f, 0.5f, 0.0f);
    glColor3f(0.1,0.9,0.5);
    glVertex3f(0.3f,0.0f, 0.0f);
    glColor3f(0.5,0.5,0.5);
    glVertex3f( -0.3f,0.0f, 0.0f);
    glEnd();


 glBegin(GL_TRIANGLES);
 glColor3f(0.9,0.2,0.5);
    glVertex3f( -0.3f, 1.15f, 0.0f);
    glColor3f(0.1,0.9,0.5);
    glVertex3f(0.3f,1.15f, 0.0f);
    glColor3f(0.5,0.5,0.5);
    glVertex3f( 0.0f,0.75f, 0.0f);
    glEnd();


    glColor3f(0.5, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(0.17, 0.6);
    glVertex2f(0.6, 0.3);
    glEnd();

    glColor3f(0.5, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(0.17, 0.7);
    glVertex2f(0.6, 1.0);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 1.0, 1.0);
glVertex3f( -0.38f, 0.5f, 0.0f);
glVertex3f(-0.5f,0.3f, 0.0f);
glColor3f(0.1, 0.1, 1.0);
glVertex3f( -0.35f,0.25f, 0.0f);
glEnd();


 glBegin(GL_TRIANGLES);
 glColor3f(0.5, 1.0, 1.0);
glVertex3f( -0.38f, 0.75f, 0.0f);
glVertex3f(-0.35f,1.0f, 0.0f);
glColor3f(0.1, 0.1, 1.0);
glVertex3f( -0.5f,0.9f, 0.0f);
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
