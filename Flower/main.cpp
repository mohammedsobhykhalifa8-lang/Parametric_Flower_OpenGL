#include <GL/freeglut.h>
#include <cmath>



float a = 10;
float k = 5;

void display() {

    glClearColor(0, 0, 0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_POLYGON);

    for(float theta = 0; theta < 2 * M_PI; theta += 0.01f) {

        float r = a * sin(k * theta);
        float x = r * cos(theta);
        float y = r * sin(theta);


        glColor3f(1,1,1);
        glVertex2f(x, y);
    }

    glEnd();

    glFlush();
}

void init() {
    gluOrtho2D(-10, 10, -10, 10);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(10, 10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Heart Equation");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
