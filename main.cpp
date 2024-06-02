#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <GL/glut.h>

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEKLARASI DAN INISIASI VARIABEL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEKLARASI DAN INISIASI FUNGSI ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//****************************************** fungsi display **********************************************************************
void ubin()
{
    glColor3d(0.66, 0.66, 0.66);
    glPushMatrix();
    glTranslated(0.0, -14.0, -20.0);
    //*****alas*****
    //depan
    glBegin(GL_QUADS);
    glVertex3f(-60.0, -2.0, 60.0);
    glVertex3f(-60.0, -6.0, 60.0);
    glVertex3f(60.0, -6.0, 60.0);
    glVertex3f(60.0, -2.0, 60.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glVertex3f(-60.0, -2.0, -60.0);
    glVertex3f(-60.0, -6.0, -60.0);
    glVertex3f(60.0, -6.0, -60.0);
    glVertex3f(60.0, -2.0, -60.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glVertex3f(-60.0, -2.0, -60.0);
    glVertex3f(-60.0, -2.0, 60.0);
    glVertex3f(60.0, -2.0, 60.0);
    glVertex3f(60.0, -2.0, -60.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glVertex3f(-60.0, -6.0, -60.0);
    glVertex3f(-60.0, -6.0, 60.0);
    glVertex3f(60.0, -6.0, 60.0);
    glVertex3f(60.0, -6.0, -60.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glVertex3f(60.0, -2.0, 60.0);
    glVertex3f(60.0, -6.0, 60.0);
    glVertex3f(60.0, -6.0, -60.0);
    glVertex3f(60.0, -2.0, -60.0);
    glEnd();

    glPopMatrix();
}

void dindingBelakang()
{
    glPushMatrix();
    glTranslatef(0.0, 63.0, -80.0);
    glColor3f(0.66, 0.66, 0.66);

    //*****dinding Belakang*****
    glBegin(GL_QUADS);

    // Depan
    glVertex3f(-60.0, 2.0, 1.0);
    glVertex3f(60.0, 2.0, 1.0);
    glVertex3f(60.0, -80.0, 1.0);  
    glVertex3f(-60.0, -80.0, 1.0); 

    // Belakang
    glVertex3f(-60.0, 8.0, -1.0);
    glVertex3f(60.0, 8.0, -1.0);
    glVertex3f(60.0, -80.0, -1.0);  
    glVertex3f(-60.0, -80.0, -1.0); 

    // Atas
    glVertex3f(-60.0, 8.0, 1.0);
    glVertex3f(60.0, 8.0, 1.0);
    glVertex3f(60.0, 8.0, -1.0);
    glVertex3f(-60.0, 8.0, -1.0);

    // Bawah
    glVertex3f(-60.0, -80.0, 1.0);  
    glVertex3f(60.0, -80.0, 1.0);   
    glVertex3f(60.0, -80.0, -1.0);  
    glVertex3f(-60.0, -80.0, -1.0); 

    // Kiri
    glVertex3f(-60.0, 8.0, 1.0);
    glVertex3f(-60.0, 8.0, -1.0);
    glVertex3f(-60.0, -80.0, -1.0);  
    glVertex3f(-60.0, -80.0, 1.0);   

    // Kanan
    glVertex3f(60.0, 8.0, 1.0);
    glVertex3f(60.0, 8.0, -1.0);
    glVertex3f(60.0, -80.0, -1.0);  
    glVertex3f(60.0, -80.0, 1.0);   

glEnd();


    glPopMatrix();
}

void dindingKiri()
{
    //*****dinding*****
    glPushMatrix();
    glTranslated(-71.0, 63.0, -20.0);
    //depan
    glBegin(GL_QUADS);

    // Depan 
    glVertex3f(-1.0, 2.0, 60.0);
    glVertex3f(-1.0, 2.0, -60.0);
    glVertex3f(-1.0, -80.0, -60.0);  
    glVertex3f(-1.0, -80.0, 60.0); 

    // Belakang 
    glVertex3f(1.0, 8.0, 60.0);
    glVertex3f(1.0, 8.0, -60.0);
    glVertex3f(1.0, -80.0, -60.0);  
    glVertex3f(1.0, -80.0, 60.0); 

    // Atas 
    glVertex3f(-1.0, 8.0, 60.0);
    glVertex3f(1.0, 8.0, 60.0);
    glVertex3f(1.0, 8.0, -60.0);
    glVertex3f(-1.0, 8.0, -60.0);

    // Bawah 
    glVertex3f(-1.0, -80.0, 60.0);  
    glVertex3f(1.0, -80.0, 60.0);   
    glVertex3f(1.0, -80.0, -60.0);  
    glVertex3f(-1.0, -80.0, -60.0); 

    // Kiri 
    glVertex3f(-1.0, 8.0, 60.0);
    glVertex3f(1.0, 8.0, 60.0);
    glVertex3f(1.0, -80.0, 60.0);  
    glVertex3f(-1.0, -80.0, 60.0);   

    // Kanan 
    glVertex3f(-1.0, 8.0, -60.0);
    glVertex3f(1.0, 8.0, -60.0);
    glVertex3f(1.0, -80.0, -60.0);  
    glVertex3f(-1.0, -80.0, -60.0);   

glEnd();
    glPopMatrix();
}

void dinding()
{
    glColor3d(1.0, 1.0, 1.0);

    glPushMatrix();
    dindingBelakang();
    glPopMatrix();

    glPushMatrix();
    glTranslated(10.0, 0.0, 0.0);
    dindingKiri();
    glPopMatrix();
}

void tempatsampah()
{
    glPushMatrix();

    // Posisi relatif terhadap ubin
    glTranslated(-45.0, -10.0, 29.0);

    // Posisi relatif terhadap bagian atas tempat sampah
    glTranslated(0.0, 3.5, 5.0);

    glBegin(GL_QUADS);

    // Warna abu-abu untuk seluruh balok
    glColor3f(0.5, 0.5, 0.5);

    // Sisi depan (dengan lubang hitam di sepertiga bagian atas)
    // Bagian atas dengan lubang hitam
    glVertex3f(-5.0, 10.0, 5.0);
    glVertex3f(5.0, 10.0, 5.0);
    glVertex3f(5.0, 5.0, 5.0);
    glVertex3f(-5.0, 5.0, 5.0);

    glColor3f(0.0, 0.0, 0.0); // Hitam untuk lubang
    glVertex3f(-3.0, 3.0, 5.1);
    glVertex3f(3.0, 3.0, 5.1);
    glVertex3f(3.0, 7.0, 5.1);
    glVertex3f(-3.0, 7.0, 5.1);

    // Kembali ke abu-abu
    glColor3f(0.5, 0.5, 0.5);
    // Bagian bawah
    glVertex3f(-5.0, -10.0, 5.0);
    glVertex3f(5.0, -10.0, 5.0);
    glVertex3f(5.0, 3.0, 5.0);
    glVertex3f(-5.0, 3.0, 5.0);

    // Sisi belakang
    glVertex3f(-5.0, -10.0, -5.0);
    glVertex3f(5.0, -10.0, -5.0);
    glVertex3f(5.0, 10.0, -5.0);
    glVertex3f(-5.0, 10.0, -5.0);

    // Sisi kiri
    glVertex3f(-5.0, -10.0, 5.0);
    glVertex3f(-5.0, 10.0, 5.0);
    glVertex3f(-5.0, 10.0, -5.0);
    glVertex3f(-5.0, -10.0, -5.0);

    // Sisi kanan
    glVertex3f(5.0, -10.0, 5.0);
    glVertex3f(5.0, 10.0, 5.0);
    glVertex3f(5.0, 10.0, -5.0);
    glVertex3f(5.0, -10.0, -5.0);

    // Sisi atas
    glVertex3f(-5.0, 10.0, 5.0);
    glVertex3f(5.0, 10.0, 5.0);
    glVertex3f(5.0, 10.0, -5.0);
    glVertex3f(-5.0, 10.0, -5.0);

    // Sisi bawah
    glVertex3f(-5.0, -10.0, 5.0);
    glVertex3f(5.0, -10.0, 5.0);
    glVertex3f(5.0, -10.0, -5.0);
    glVertex3f(-5.0, -10.0, -5.0);

    glEnd();

    glPopMatrix();
}

void meja() {
glPushMatrix();
glColor3f(0.7, 0.5, 0.3);
glTranslatef(2, -3.0, -50.0); // Kanan, bawah, depan

//****** Sisi depan meja******
glBegin(GL_QUADS);
// Depan
glVertex3f(-35, 16, 6);
glVertex3f(35, 16, 6);
glVertex3f(35, -16, 6);
glVertex3f(-35, -16, 6);

// Belakang
glVertex3f(-35, 16, -6);
glVertex3f(35, 16, -6);
glVertex3f(35, -16, -6);
glVertex3f(-35, -16, -6);

// Kiri
glVertex3f(-35, 16, 6);
glVertex3f(-35, -16, 6);
glVertex3f(-35, -16, -6);
glVertex3f(-35, 16, -6);

// Kanan
glVertex3f(35, 16, 6);
glVertex3f(35, -16, 6);
glVertex3f(35, -16, -6);
glVertex3f(35, 16, -6);

// Bagian atas
glVertex3f(-35, 16, 6);
glVertex3f(35, 16, 6);
glVertex3f(35, 16, -6);
glVertex3f(-35, 16, -6);
glEnd();

glPopMatrix();

//******kanan meja****** 
glPushMatrix();
glColor3f(0.7, 0.5, 0.3);
glTranslatef(-28, -3.0, -60.0); // Kanan, bawah, depan
glBegin(GL_QUADS);
// Depan
glVertex3f(-6, 16, 6);
glVertex3f(6, 16, 6);
glVertex3f(6, -16, 6);
glVertex3f(-6, -16, 6);

// Belakang
glVertex3f(-6, 16, -6);
glVertex3f(6, 16, -6);
glVertex3f(6, -16, -6);
glVertex3f(-6, -16, -6);

// Kiri
glVertex3f(-6, 16, 6);
glVertex3f(-6, -16, 6);
glVertex3f(-6, -16, -6);
glVertex3f(-6, 16, -6);

// Kanan
glVertex3f(6, 16, 6);
glVertex3f(6, -16, 6);
glVertex3f(6, -16, -6);
glVertex3f(6, 16, -6);

// Bagian atas
glVertex3f(-6, 16, 6);
glVertex3f(6, 16, 6);
glVertex3f(6, 16, -6);
glVertex3f(-6, 16, -6);
glEnd();

glPopMatrix();

}

void logo()
{
    //******Menggambar tanda tambah horizontal******
    glPushMatrix();
    glTranslatef(0.0, 45.0, -70.0); // Posisi untuk tanda tambah horizontal
    // Warna hijau untuk tanda tambah
    glColor3f(0.0, 1.0, 0.0);

    // Bagian horizontal tanda tambah (ditengah)
    glBegin(GL_QUADS);

    // Depan
    glVertex3f(-5.0, 2.0, 1.0);
    glVertex3f(5.0, 2.0, 1.0);
    glVertex3f(5.0, -2.0, 1.0);
    glVertex3f(-5.0, -2.0, 1.0);

    // Belakang
    glVertex3f(-5.0, 2.0, -1.0);
    glVertex3f(5.0, 2.0, -1.0);
    glVertex3f(5.0, -2.0, -1.0);
    glVertex3f(-5.0, -2.0, -1.0);

    // Atas
    glVertex3f(-5.0, 2.0, 1.0);
    glVertex3f(5.0, 2.0, 1.0);
    glVertex3f(5.0, 2.0, -1.0);
    glVertex3f(-5.0, 2.0, -1.0);

    // Bawah
    glVertex3f(-5.0, -2.0, 1.0);
    glVertex3f(5.0, -2.0, 1.0);
    glVertex3f(5.0, -2.0, -1.0);
    glVertex3f(-5.0, -2.0, -1.0);

    // Kiri
    glVertex3f(-5.0, 2.0, 1.0);
    glVertex3f(-5.0, 2.0, -1.0);
    glVertex3f(-5.0, -2.0, -1.0);
    glVertex3f(-5.0, -2.0, 1.0);

    // Kanan
    glVertex3f(5.0, 2.0, 1.0);
    glVertex3f(5.0, 2.0, -1.0);
    glVertex3f(5.0, -2.0, -1.0);
    glVertex3f(5.0, -2.0, 1.0);

    glEnd();

    //******Bagian vertikal tanda tambah (ditengah)******
    glBegin(GL_QUADS);

    // Depan
    glVertex3f(-2.0, 5.0, 1.0);
    glVertex3f(2.0, 5.0, 1.0);
    glVertex3f(2.0, -5.0, 1.0);
    glVertex3f(-2.0, -5.0, 1.0);

    // Belakang
    glVertex3f(-2.0, 5.0, -1.0);
    glVertex3f(2.0, 5.0, -1.0);
    glVertex3f(2.0, -5.0, -1.0);
    glVertex3f(-2.0, -5.0, -1.0);

    // Atas
    glVertex3f(-2.0, 5.0, 1.0);
    glVertex3f(2.0, 5.0, 1.0);
    glVertex3f(2.0, 5.0, -1.0);
    glVertex3f(-2.0, 5.0, -1.0);

    // Bawah
    glVertex3f(-2.0, -5.0, 1.0);
    glVertex3f(2.0, -5.0, 1.0);
    glVertex3f(2.0, -5.0, -1.0);
    glVertex3f(-2.0, -5.0, -1.0);

    // Kiri
    glVertex3f(-2.0, 5.0, 1.0);
    glVertex3f(-2.0, 5.0, -1.0);
    glVertex3f(-2.0, -5.0, -1.0);
    glVertex3f(-2.0, -5.0, 1.0);

    // Kanan
    glVertex3f(2.0, 5.0, 1.0);
    glVertex3f(2.0, 5.0, -1.0);
    glVertex3f(2.0, -5.0, -1.0);
    glVertex3f(2.0, -5.0, 1.0);

    glEnd();

    glPopMatrix();
}

void pintu() {
    glPushMatrix();
    glTranslatef(43, 30.0, -70.0);
    glColor3f(0.4, 0.2, 0.1);

    glBegin(GL_QUADS);

    // Depan
    glVertex3f(-15.0, 2.0, 1.0);
    glVertex3f(15.0, 2.0, 1.0);
    glVertex3f(15.0, -45.0, 1.0);
    glVertex3f(-15.0, -45.0, 1.0);

    // Belakang
    glVertex3f(-15.0, 2.0, -1.0);
    glVertex3f(15.0, 2.0, -1.0);
    glVertex3f(15.0, -45.0, -1.0);
    glVertex3f(-15.0, -45.0, -1.0);

    // Atas
    glVertex3f(-15.0, 2.0, 1.0);
    glVertex3f(15.0, 2.0, 1.0);
    glVertex3f(15.0, 2.0, -1.0);
    glVertex3f(-15.0, 2.0, -1.0);

    // Bawah
    glVertex3f(-15.0, -35.0, 1.0);
    glVertex3f(15.0, -35.0, 1.0);
    glVertex3f(15.0, -45.0, -1.0);
    glVertex3f(-15.0, -45.0, -1.0);

    // Kiri
    glVertex3f(-15.0, 2.0, 1.0);
    glVertex3f(-15.0, 2.0, -1.0);
    glVertex3f(-15.0, -45.0, -1.0);
    glVertex3f(-15.0, -45.0, 1.0);

    // Kanan
    glVertex3f(15.0, 2.0, 1.0);
    glVertex3f(15.0, 2.0, -1.0);
    glVertex3f(15.0, -45.0, -1.0);
    glVertex3f(15.0, -45.0, 1.0);

    glEnd();
    glPopMatrix();
}

void kursi() {

    glPushMatrix();
    glTranslated(-95.0, -6.0, -55.0);
    //******batang 1******
    //  Depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 80.0);
    glVertex3f(69.0, -10.0, 80.0);
    glVertex3f(72.0, -10.0, 80.0);
    glVertex3f(72.0, -2.0, 80.0);
    glEnd();

    // Belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 77.0);
    glVertex3f(69.0, -10.0, 77.0);
    glVertex3f(72.0, -10.0, 77.0);
    glVertex3f(72.0, -2.0, 77.0);
    glEnd();

    // Kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(72.0, -2.0, 80.0);
    glVertex3f(72.0, -10.0, 80.0);
    glVertex3f(72.0, -10.0, 77.0);
    glVertex3f(72.0, -2.0, 77.0);
    glEnd();

    // Kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 80.0);
    glVertex3f(69.0, -10.0, 80.0);
    glVertex3f(69.0, -10.0, 77.0);
    glVertex3f(69.0, -2.0, 77.0);
    glEnd();

    // Atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 80.0);
    glVertex3f(72.0, -2.0, 80.0);
    glVertex3f(72.0, -2.0, 77.0);
    glVertex3f(69.0, -2.0, 77.0);
    glEnd();

    // Bawah
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -10.0, 80.0);
    glVertex3f(72.0, -10.0, 80.0);
    glVertex3f(72.0, -10.0, 77.0);
    glVertex3f(69.0, -10.0, 77.0);
    glEnd();

    //******batang 2******
    // depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 80.0);
    glVertex3f(51.0, -10.0, 80.0);
    glVertex3f(54.0, -10.0, 80.0);
    glVertex3f(54.0, -2.0, 80.0);
    glEnd();
    // belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 77.0);
    glVertex3f(51.0, -10.0, 77.0);
    glVertex3f(54.0, -10.0, 77.0);
    glVertex3f(54.0, -2.0, 77.0);
    glEnd();
    // kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(54.0, -2.0, 80.0);
    glVertex3f(54.0, -10.0, 80.0);
    glVertex3f(54.0, -10.0, 77.0);
    glVertex3f(54.0, -2.0, 77.0);
    glEnd();
    // kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 80.0);
    glVertex3f(51.0, -10.0, 80.0);
    glVertex3f(51.0, -10.0, 77.0);
    glVertex3f(51.0, -2.0, 77.0);
    glEnd();
    // atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 33.0);
    glVertex3f(51.0, -2.0, 33.0);
    glVertex3f(54.0, -2.0, 36.0);
    glVertex3f(54.0, -2.0, 36.0);
    glEnd();

    //******batang 3******
    // depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 18.0);
    glVertex3f(51.0, -10.0, 18.0);
    glVertex3f(54.0, -10.0, 18.0);
    glVertex3f(54.0, -2.0, 18.0);
    glEnd();
    // belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 15.0);
    glVertex3f(51.0, -10.0, 15.0);
    glVertex3f(54.0, -10.0, 15.0);
    glVertex3f(54.0, -2.0, 15.0);
    glEnd();
    // kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(54.0, -2.0, 18.0);
    glVertex3f(54.0, -10.0, 18.0);
    glVertex3f(54.0, -10.0, 15.0);
    glVertex3f(54.0, -2.0, 15.0);
    glEnd();
    // kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 18.0);
    glVertex3f(51.0, -10.0, 18.0);
    glVertex3f(51.0, -10.0, 15.0);
    glVertex3f(51.0, -2.0, 15.0);
    glEnd();
    // atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(51.0, -2.0, 15.0);
    glVertex3f(51.0, -2.0, 15.0);
    glVertex3f(54.0, -2.0, 18.0);
    glVertex3f(54.0, -2.0, 18.0);
    glEnd();

    //******batang 4******
    // depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 18.0);
    glVertex3f(69.0, -10.0, 18.0);
    glVertex3f(72.0, -10.0, 18.0);
    glVertex3f(72.0, -2.0, 18.0);
    glEnd();
    // belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 15.0);
    glVertex3f(69.0, -10.0, 15.0);
    glVertex3f(72.0, -10.0, 15.0);
    glVertex3f(72.0, -2.0, 15.0);
    glEnd();
    // kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(72.0, -2.0, 18.0);
    glVertex3f(72.0, -10.0, 18.0);
    glVertex3f(72.0, -10.0, 15.0);
    glVertex3f(72.0, -2.0, 15.0);
    glEnd();
    // kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 18.0);
    glVertex3f(69.0, -10.0, 18.0);
    glVertex3f(69.0, -10.0, 15.0);
    glVertex3f(69.0, -2.0, 15.0);
    glEnd();
    // atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(69.0, -2.0, 15.0);
    glVertex3f(69.0, -2.0, 15.0);
    glVertex3f(72.0, -2.0, 18.0);
    glVertex3f(72.0, -2.0, 18.0);
    glEnd();

    //******busa******
    //  atas
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255); // Blue
    glVertex3f(72.0, -2.0, 15.0);
    glVertex3f(51.0, -2.0, 15.0);
    glVertex3f(51.0, -2.0, 80.0);
    glVertex3f(72.0, -2.0, 80.0);
    glEnd();

    // bawah
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 139); 
    glVertex3f(72.0, -2.5, 15.0);
    glVertex3f(51.0, -2.5, 15.0);
    glVertex3f(51.0, -2.5, 80.0);
    glVertex3f(72.0, -2.5, 80.0);
    glEnd();

    // depan
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 139); 
    glVertex3f(51.0, -2.5, 80.0);
    glVertex3f(51.0, -2.0, 80.0);
    glVertex3f(72.0, -2.0, 80.0);
    glVertex3f(72.0, -2.5, 80.0);
    glEnd();

    // sandaran
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex3f(45.0, 12.0, 15.0);
    glVertex3f(51.0, -2.0, 15.0);
    glVertex3f(51.0, -2.0, 80.0);
    glVertex3f(45.0, 12.0, 80.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex3f(42.0, 12.0, 15.0);
    glVertex3f(48.0, -2.2, 15.0);
    glVertex3f(48.0, -2.2, 80.0);
    glVertex3f(42.0, 12.0, 80.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex3f(51.0, -2.2, 15.0);
    glVertex3f(48.0, -2.2, 15.0);
    glVertex3f(48.0, -2.2, 80.0);
    glVertex3f(51.0, -2.2, 80.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 139);
    glVertex3f(42.0, 12.0, 80.0);
    glVertex3f(48.0, -2.2, 80.0);
    glVertex3f(51.0, -2.2, 80.0);
    glVertex3f(45.0, 12.0, 80.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 139);
    glVertex3f(42.0, 12.0, 15.0);
    glVertex3f(48.0, -2.2, 15.0);
    glVertex3f(51.0, -2.2, 15.0);
    glVertex3f(45.0, 12.0, 15.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex3f(45.0, 12.1, 15.0);
    glVertex3f(42.0, 12.1, 15.0);
    glVertex3f(42.0, 12.1, 80.0);
    glVertex3f(45.0, 12.1, 80.0);
    glEnd();

    glPopMatrix();
}

void display()
{
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

    glPushMatrix();
    kursi();
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}
//****************************************************************************************************************************
//****************************************** fungsi init **********************************************************************
void init()
{
    glClearColor(0.2, 0.2, 0.2, 1.0);

    const GLfloat light_ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
    const GLfloat light_diffuse[] = {0.75f, 0.75f, 0.75f, 1.0f};
    const GLfloat light_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
    const GLfloat light_position[] = {2.0f, 5.0f, 5.0f, 0.0f};

    const GLfloat mat_ambient[] = {0.7f, 0.7f, 0.7f, 1.0f};
    const GLfloat mat_diffuse[] = {0.8f, 0.8f, 0.8f, 1.0f};
    const GLfloat mat_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
    const GLfloat high_shininess[] = {100.0f};

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
void reshape(int w, int h)
{
    // Mengatur viewport ke ukuran jendela
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);

    // Mengatur proyeksi perspektif
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 400.0);

    // Mengatur pandangan kamera
    glTranslated(0.0, -45.0, -100.0);
    gluLookAt(0.0, 0.0, 150.0,  // Posisi kamera 
              0.0, 0.0, 0.0,   // Titik yang dilihat kamera
              0.0, 1.0, 0.0);  // Vektor atas

    // Kembali ke mode model-view
    glMatrixMode(GL_MODELVIEW);
}

//****************************************************************************************************************************
//********************************************** fungsi keyboard *************************************************************
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'i':
    case 'I':
        glRotatef(-3.0, 1.0, 0.0, 0.0); // rotasi ke atas
        break;
    case 'k':
    case 'K':
        glRotatef(3.0, 1.0, 0.0, 0.0); // rotasi ke bawah
        break;
    case 'l':
    case 'L':
        glRotatef(3.0, 0.0, 1.0, 0.0); // rotasi ke kanan
        break;
    case 'j':
    case 'J':
        glRotatef(-3.0, 0.0, 1.0, 0.0); // rotasi ke kiri
        break;
    case 'u':
    case 'U':
        glRotatef(-3.0, 0.0, 0.0, 1.0); // rotasi ke thd sumbu z / searah jarum jam
        break;
    case 'h':
    case 'H':
        glRotatef(3.0, 0.0, 0.0, 1.0); // rotasi ke thd sumbu z / lawan arah jarum jam
        break;
    case 'd':
    case 'D':
        glTranslatef(1.0, 0.0, 0.0); // geser ke kanan
        break;
    case 'a':
    case 'A':
        glTranslatef(-1.0, 0.0, 0.0); // geser ke kiri
        break;
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 1.0); // geser ke depan
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -1.0); // geser ke belakang
        break;
    //case 'f':
    //case 'F':
     //   glTranslatef(0.0, 1.0, 0.0); // geser ke bawah
     //   break;
    //case 'e':
    //case 'E':
    //    glTranslatef(0.0, -1.0, 0.0); // geser ke atas
    //    break;
    }

    glutPostRedisplay();
}

//**********************************************************************************************************
// ************************************Fungsi untuk menangani event mouse***********************************
void mouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == 3) { // Scroll up
            glTranslatef(0.0, 1.0, 0.0); // geser ke atas
        } else if (button == 4) { // Scroll down
            glTranslatef(0.0, -1.0, 0.0); // geser ke bawah
        }
        glutPostRedisplay(); // Menggambarkan ulang layar
    }
}

//*****************************************************************************************************************************************
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ad
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ PROGRAM UTAMA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1152, 680);
    glutInitWindowPosition(20, 10);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Project Grafika 3D Kelompok 9 Jum'at");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse); 
    init();
    glutMainLoop();
}
