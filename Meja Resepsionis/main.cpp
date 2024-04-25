#include <GL/glut.h>


float rotateX = 0.0;
float rotateY = 0.0;


void initOpenGL() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.1, 0.1, 0.1, 1.0);
}


void drawLShapedDesk() {
    glColor3f(0.7, 0.5, 0.3);
    glPushMatrix();
    glTranslatef(-2.0, 0.25, 0.0);
    glScalef(5.0, 1.5, 1.0);
    glutSolidCube(1.0);
    glTranslatef(0.5, 0.0, 0.5);
    glScalef(0.2, 1.0, 2.0);
    glutSolidCube(1.0);

    glPopMatrix();
}


void handleResize(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 5.0, 10.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 5.0, 10.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);


    glRotatef(rotateX, 1.0, 0.0, 0.0);
    glRotatef(rotateY, 0.0, 1.0, 0.0);

    drawLShapedDesk();

    glutSwapBuffers();
}


void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'w':
        rotateX += 5.0;
        break;
    case 's':
        rotateX -= 5.0;
        break;
    case 'a':
        rotateY += 5.0;
        break;
    case 'd':
        rotateY -= 5.0;
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("3D L-Shaped Desk Viewer");
    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(handleResize);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
