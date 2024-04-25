#include <GL/glut.h>


float rotateX = 0.0;
float rotateY = 0.0;


void initOpenGL() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);  // Background hitam
}


void drawPlusSign() {
    glColor3f(0.0, 1.0, 0.0);
    glPushMatrix();

    glTranslatef(0.0, 0.0, 0.0);
    glScalef(0.2, 1.0, 0.2);
    glutSolidCube(1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glScalef(1.0, 0.2, 0.2);
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
    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);


    glRotatef(rotateX, 1.0, 0.0, 0.0);
    glRotatef(rotateY, 0.0, 1.0, 0.0);

    drawPlusSign();

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
    glutCreateWindow("3D Plus Sign - Hospital Logo");
    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(handleResize);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
