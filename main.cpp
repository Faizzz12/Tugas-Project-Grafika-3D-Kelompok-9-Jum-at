#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEKLARASI DAN INISIASI VARIABEL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEKLARASI DAN INISIASI FUNGSI ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//****************************************** fungsi display **********************************************************************
void ubin(){
    glColor3d(0.66,0.66,0.66);
    glPushMatrix();
        glTranslated(0.0,-14.0,-20.0);
        glScaled(12.0,0.2,10.0);
        glutSolidCube(10);
    glPopMatrix();
}

void dindingBelakang(){
    // dinding
    glPushMatrix();
        glTranslated(0.0,25.0,-71.0);
        glScaled(12.0,8.0,0.2);
        glutSolidCube(10);
    glPopMatrix();
}

void dindingKiri(){
    // dinding
    glPushMatrix();
        glTranslated(-71.0,25.0,-20.0); 
        glScaled(0.2,8.0,10.0); 
        glutSolidCube(10);
    glPopMatrix();
}

void dinding(){
    glColor3d(1.0,1.0,1.0);

    glPushMatrix();
        dindingBelakang();
    glPopMatrix();

    glPushMatrix();
        glTranslated(10.0,0.0,0.0);
        dindingKiri();
    glPopMatrix();
}


void tempatsampah() {
    glPushMatrix();

    // Bagian atas tempat sampah
    glColor3f(0.5, 0.5, 0.5);
    glTranslated(-50.0, -7.0, 19.0); // Posisi relatif terhadap ubin
    glScalef(1.0, 1.5, 1.0); // Ukuran tempat sampah yang lebih besar
    glutSolidCube(10.0);

    // Lubang tempat sampah
    glColor3f(0.0, 0.0, 0.0);
    glTranslated(0.0, 3.5, 5.0); // Posisi relatif terhadap bagian atas tempat sampah, sesuai dengan perubahan posisi relatif sebelumnya
    glScalef(0.8, 0.2, 0.002); // Skala untuk membuat lubang tempat masukan sampah
    glutSolidCube(10.0);

    glPopMatrix();
}

void meja() {
    glColor3f(0.7, 0.5, 0.3);

    // depan meja
    glPushMatrix();
    glTranslatef(-1.5, 0.75, -45.0); // Kanan, bawah, depan
    glScalef(5.0, 2.0, 1.0);
    glutSolidCube(15.0);
    glPopMatrix();

    // kanan meja
    glPushMatrix();
    glTranslatef(-31.5, 0.75, -52.0);  
    glScalef(1.0, 2.0, 1.8);
    glutSolidCube(15.0);
    glPopMatrix();

    //kiri meja
    glPushMatrix();
    glTranslatef(28.8, 0.75, -52.0);  
    glScalef(1.0, 2.0, 1.8); 
    glutSolidCube(15.0);
    glPopMatrix();
}

void logo() {
    glColor3f(1.0, 0.0, 0.0);
    glPushMatrix();

    //datar
    glTranslatef(0.0, 45, -70.0); 
    glScalef(0.2, 1.0, 0.2);
    glutSolidCube(10.0);
    glPopMatrix();

    //tegak
    glPushMatrix();
    glTranslatef(0.0, 45.0, -70.0);
    glScalef(1.0, 0.2, 0.2);
    glutSolidCube(10.0);
    glPopMatrix();
}

void pintu() {
    glColor3f(0.4, 0.2, 0.1); // Set color to dark brown

    glPushMatrix();
    glTranslatef(45.0, -7.0, -70.0); 
    glScalef(2.5, -7.0, 0.1);
    glutSolidCube(10.0); 
    glPopMatrix();
}



void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //============================ Ruangan ======================
    glPushMatrix();
        ubin();
    glPopMatrix();

    glPushMatrix();
        dinding();
    glPopMatrix();
    
    glPushMatrix();
        tempatsampah();
    glPopMatrix();

    glPushMatrix();
        meja();
    glPopMatrix();

    glPushMatrix();
        logo();
    glPopMatrix();

    glPushMatrix();
        pintu();
    glPopMatrix();


    glFlush();
    glutSwapBuffers();
}
//****************************************************************************************************************************
//****************************************** fungsi init **********************************************************************
void init(){
    glClearColor(0.2, 0.2, 0.2, 1.0);

    const GLfloat light_ambient[] = { 0.1f, 0.1f, 0.1f, 1.0f };
    const GLfloat light_diffuse[] = { 0.75f, 0.75f, 0.75f, 1.0f };
    const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

    const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
    const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
    const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat high_shininess[] = { 100.0f };


    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);

    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}
//****************************************************************************************************************************
//********************************************** fungsi reshape **************************************************************
void reshape(int w, int h){
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 400.0);
    glTranslated(0.0, -45.0, -100.0);
    gluLookAt(0.0, 0.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}
//****************************************************************************************************************************
//********************************************** fungsi keyboard *************************************************************
void keyboard(unsigned char key, int x, int y){
    switch (key){
        case 'w':
        case 'W':
            glRotatef(-3.0, 1.0, 0.0, 0.0); // rotasi ke atas
        break;
        case 's':
        case 'S':
             glRotatef(3.0, 1.0, 0.0, 0.0); // rotasi ke bawah
        break;
        case 'd':
        case 'D':
            glRotatef(3.0, 0.0, 1.0, 0.0); // rotasi ke kanan
        break;
        case 'a':
        case 'A':
            glRotatef(-3.0, 0.0, 1.0, 0.0); //rotasi ke kiri
        break;
        case 'e':
        case 'E':
            glRotatef(-3.0, 0.0, 0.0, 1.0); //rotasi ke thd sumbu z / searah jarum jam
        break;
        case 'f':
        case 'F':
            glRotatef(3.0, 0.0, 0.0, 1.0); //rotasi ke thd sumbu z / lawan arah jarum jam
        break;
        case 'j':
        case 'J':
            glTranslatef(1.0, 0.0, 0.0); //geser ke kanan
        break;
        case 'l':
        case 'L':
            glTranslatef(-1.0, 0.0, 0.0); //geser ke kiri
        break;
        case 'i':
        case 'I':
            glTranslatef(0.0, 0.0, 1.0); //geser ke depan
        break;
        case 'k':
        case 'K':
            glTranslatef(0.0, 0.0, -1.0); //geser ke belakang
        break;
        case 'h':
        case 'H':
            glTranslatef(0.0, 1.0, 0.0); //geser ke bawah
        break;
        case 'u':
        case 'U':
            glTranslatef(0.0, -1.0, 0.0); //geser ke atas
        break;
    }

    glutPostRedisplay();
}
//*****************************************************************************************************************************************
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ad
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ PROGRAM UTAMA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main (int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1152, 680);
    glutInitWindowPosition(20, 10);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Project GLUT 3D");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();
}
