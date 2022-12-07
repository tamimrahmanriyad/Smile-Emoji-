#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); //GLfloat red,green,blue,alpha
//    initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION); // To specify which matrix is the
    //current matrix & projection applies subsequent matrix to projecton
    //matrix stack
    glLoadIdentity();
// glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
// gluOrtho2D(0.0,800.0,0.0,800.0); // Orthographic
    //representation;
    //  multiply the current matrix by an orthographic matrix
//    2D= left right,bottom,top equivalent near=-1,far=1
    glOrtho(-15, 15, -15, 15, -15, 15);
}
void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
//glColor3f(1.0,0.0,0.0);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 100; i++)
    {
        float angle = 2 * 3.1416f * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.662, 0.0);
    circle(10, 10, 0.7, 0.7);
    glColor3f(1.0, 1.0, 0.0);
    circle(10, 10, 0, 0);
    glColor3f(0.0, 0.0, 0.0);
    circle(6.5, 6.5, 0, 0);
    glColor3f(1.0, 1.0, 0.0);
    circle(8, 6, 0, 2);
    glColor3f(1.0, 0.0, 0.0);
    circle(2.45, 0.49, 0, -6); //jibba
    glColor3f(0.0, 0.0, 0.0); // right chokh
    circle(2.5, 3, 4, 3);
    glColor3f(1.0, 1.0, 0.0);
    circle(3, 3, 4, 2.5);
    glColor3f(0.0, 0.0, 0.0);
    circle(2, 2, 4, 2.5);
    glColor3f(1.0, 1.0, 1.0);
    circle(1.8, 1.8, 4, 2.5);
    glColor3f(0.0, 0.0, 0.0);
    circle(1, 1, 4.2, 2.3);
    glColor3f(1.0, 1.0, 1.0);
    circle(0.2, 0.2, 4.6, 2.3);
    glColor3f(0.0, 0.0, 0.0); // left chokh
    circle(2.5, 3, -4, 3);
    glColor3f(1.0, 1.0, 0.0);
    circle(3, 3, -4, 2.5);
    glColor3f(0.0, 0.0, 0.0);
    circle(2, 2, -4, 2.5);
    glColor3f(1.0, 1.0, 1.0);
    circle(1.8, 1.8, -4, 2.5);
    glColor3f(0.0, 0.0, 0.0);
    circle(1, 1, -3.8, 2.3);
    glColor3f(1.0, 1.0, 1.0);
    circle(0.2, 0.2, -3.4, 2.3);
    glutSwapBuffers();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Lab Task-4");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
