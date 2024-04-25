#include <GL/glut.h>

float angleX = 0.0f;
float angleY = 0.0f;

void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
}


void drawTrashBin() {

    glPushMatrix();


    glColor3f(0.5, 0.5, 0.5);
    glScalef(1.0, 1.5, 1.0);
    glutSolidCube(1.0);


    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(0.0, 0.25, 0.501);
    glScalef(0.8, 0.2, 0.002); // Skala untuk membuat tempat masukan sampah
    glutSolidCube(1.0);

    glPopMatrix();
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();


    gluLookAt(0.0, 0.0, 5.0,
              0.0, 0.0, 0.0,
              0.0, 1.0, 0.0);


    glRotatef(angleX, 1.0f, 0.0f, 0.0f);
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);

    drawTrashBin();

    glutSwapBuffers();
}


void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}


void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'w':
            angleX -= 5.0f;
            break;
        case 's':
            angleX += 5.0f;
            break;
        case 'a':
            angleY -= 5.0f;
            break;
        case 'd':
            angleY += 5.0f;
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("3D Trash Bin");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
