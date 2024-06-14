#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <GL/glut.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

float cameraPosX = 0.0f, cameraPosY = 0.0f, cameraPosZ = 150.0f;
float cameraYaw = 0.0f, cameraPitch = 0.0f;

//~~ DEKLARASI DAN INISIASI VARIABEL ~~~

//~~~~~~
//~~ DEKLARASI DAN INISIASI FUNGSI ~~~~
//** fungsi display ****

GLuint texture1, texture2, texture3, texture4, texture5, texture6, texture7;

void updateCamera() {
    glLoadIdentity();
    glRotatef(cameraPitch, 1.0, 0.0, 0.0);
    glRotatef(cameraYaw, 0.0, 1.0, 0.0);
    glTranslatef(-cameraPosX, -cameraPosY, -cameraPosZ);
}

void init()
{
    glClearColor(0.2, 0.2, 0.2, 1.0);

    int width, height, channels;
    unsigned char *image = stbi_load("D:/Grafkom Texture Asset/ubin.jpg", &width, &height, &channels, STBI_rgb_alpha);
    if (image == NULL)
    {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture1);
    glBindTexture(GL_TEXTURE_2D, texture1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
    stbi_image_free(image);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width2, height2, channels2;
    unsigned char *image2 = stbi_load("D:/Grafkom Texture Asset/dinding.jpg", &width2, &height2, &channels2, STBI_rgb_alpha);
    if (image2 == NULL)
    {
        printf("Error loading texture 2\n");
        exit(1);
    }

    // Generate and bind texture 2
    glGenTextures(1, &texture2);
    glBindTexture(GL_TEXTURE_2D, texture2);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
    stbi_image_free(image2);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width3, height3, channels3;
    unsigned char *image3 = stbi_load("D:/Grafkom Texture Asset/kayu.jpg", &width3, &height3, &channels3, STBI_rgb_alpha);
    if (image3 == NULL)
    {
        printf("Error loading texture 2\n");
        exit(1);
    }

    // Generate and bind texture 3
    glGenTextures(1, &texture3);
    glBindTexture(GL_TEXTURE_2D, texture3);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
    stbi_image_free(image3);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width4, height4, channels4;
    unsigned char *image4 = stbi_load("D:/Grafkom Texture Asset/biru.jpg", &width4, &height4, &channels4, STBI_rgb_alpha);
    if (image4 == NULL)
    {
        printf("Error loading texture 2\n");
        exit(1);
    }

    // Generate and bind texture 4
    glGenTextures(1, &texture4);
    glBindTexture(GL_TEXTURE_2D, texture4);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width4, height4, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
    stbi_image_free(image4);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width5, height5, channels5;
    unsigned char *image5 = stbi_load("D:/Grafkom Texture Asset/besi.jpg", &width5, &height5, &channels5, STBI_rgb_alpha);
    if (image5 == NULL)
    {
        printf("Error loading texture 2\n");
        exit(1);
    }

    // Generate and bind texture 5
    glGenTextures(1, &texture5);
    glBindTexture(GL_TEXTURE_2D, texture5);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width5, height5, 0, GL_RGBA, GL_UNSIGNED_BYTE, image5);
    stbi_image_free(image5);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width6, height6, channels6;
    unsigned char *image6 = stbi_load("D:/Grafkom Texture Asset/hijau.jpg", &width6, &height6, &channels6, STBI_rgb_alpha);
    if (image6 == NULL)
    {
        printf("Error loading texture 2\n");
        exit(1);
    }

    // Generate and bind texture 6
    glGenTextures(1, &texture6);
    glBindTexture(GL_TEXTURE_2D, texture6);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width6, height6, 0, GL_RGBA, GL_UNSIGNED_BYTE, image6);
    stbi_image_free(image6);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int width7, height7, channels7;
    unsigned char *image7 = stbi_load("D:/Grafkom Texture Asset/Jam.jpeg", &width7, &height7, &channels7, STBI_rgb_alpha);
    if (image == NULL)
    {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture7);
    glBindTexture(GL_TEXTURE_2D, texture7);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width7, height7, 0, GL_RGBA, GL_UNSIGNED_BYTE, image7);
    stbi_image_free(image7);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    const GLfloat light_ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
    const GLfloat light_diffuse[] = {0.75f, 0.75f, 0.75f, 1.0f};
    const GLfloat light_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};

    // Position untuk setiap sumber cahaya
    const GLfloat light_position0[] = {2.0f, 5.0f, 5.0f, 0.0f};   // GL_LIGHT0
    const GLfloat light_position1[] = {-2.0f, -5.0f, 5.0f, 0.0f}; // GL_LIGHT1
    const GLfloat light_position2[] = {0.0f, 0.0f, 5.0f, 1.0f};   // GL_LIGHT2

    const GLfloat mat_ambient[] = {0.7f, 0.7f, 0.7f, 1.0f};
    const GLfloat mat_diffuse[] = {0.8f, 0.8f, 0.8f, 1.0f};
    const GLfloat mat_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
    const GLfloat high_shininess[] = {100.0f};

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_TEXTURE_2D);
    glShadeModel(GL_SMOOTH);

    // Konfigurasi untuk GL_LIGHT0
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position0);

    // Konfigurasi untuk GL_LIGHT1
    glEnable(GL_LIGHT1);
    glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position1);

    // Konfigurasi untuk GL_LIGHT2
    glEnable(GL_LIGHT2);
    glLightfv(GL_LIGHT2, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT2, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT2, GL_POSITION, light_position2);

    // Konfigurasi material
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}


void ubin()
{
    glColor3d(0.66, 0.66, 0.66);
    glPushMatrix();
    glTranslated(0.0, -14.0, -20.0);
    glEnable(GL_TEXTURE_2D); // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture1);
    
    //depan
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, -2.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -6.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -6.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, -2.0, 80.0);
    
    //belakang
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, -2.0, -80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -6.0, -80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -6.0, -80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, -2.0, -80.0);
    
    //atas
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, -2.0, -80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -2.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, -2.0, -80.0);

    //bawah
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, -6.0, -80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -6.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -6.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, -6.0, -80.0);

    //kanan
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex3f(60.0, -2.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(60.0, -6.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -6.0, -80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, -2.0, -80.0);
    
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();
}

void dindingBelakang()
{
    glPushMatrix();
    glTranslatef(0.0, 63.0, -100.0);
    glColor3f(0.66, 0.66, 0.66);
    glEnable(GL_TEXTURE_2D); // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture2);

    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -80.0, 1.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -80.0, 1.0); 

    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, 8.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, 8.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -80.0, -1.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -80.0, -1.0); 

    // Atas
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, 8.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, 8.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, 8.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, 8.0, -1.0);

    // Bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, -80.0, 1.0);  
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, -80.0, 1.0);   
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -80.0, -1.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -80.0, -1.0); 

    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(-60.0, 8.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-60.0, 8.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-60.0, -80.0, -1.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-60.0, -80.0, 1.0);   

    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(60.0, 8.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(60.0, 8.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(60.0, -80.0, -1.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(60.0, -80.0, 1.0); 
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();
}

void dindingKiri()
{
    glPushMatrix();
    glTranslated(-71.0, 63.0, -20.0);
    glEnable(GL_TEXTURE_2D); // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture2);
    
    glBegin(GL_QUADS);

    // Depan 
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-1.0, 2.0, -80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-1.0, -80.0, -80.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -80.0, 80.0); 

    // Belakang 
    glTexCoord2f(0.0, 0.0); glVertex3f(1.0, 8.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 8.0, -80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -80.0, -80.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(1.0, -80.0, 80.0); 

    // Atas 
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 8.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 8.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, 8.0, -80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, 8.0, -80.0);

    // Bawah 
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, -80.0, 80.0);  
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, -80.0, 80.0);   
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -80.0, -80.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -80.0, -80.0); 

    // Kiri 
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 8.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 8.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -80.0, 80.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -80.0, 80.0);   

    // Kanan 
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 8.0, -80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 8.0, -80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -80.0, -80.0);  
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -80.0, -80.0);
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
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
    glTranslated(-45.0, -10.0, 34.0);

    // Posisi relatif terhadap bagian atas tempat sampah
    glTranslated(0.0, 3.5, 5.0);
    glBindTexture(GL_TEXTURE_2D, texture5);
    glEnable(GL_TEXTURE_2D);

    glBegin(GL_QUADS);

    // Warna abu-abu untuk seluruh balok
    glColor3f(0.5, 0.5, 0.5);

    // Sisi depan
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 10.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 10.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -10.0, 5.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -10.0, 5.0);

    // Sisi belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -10.0, -5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -10.0, -5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 10.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 10.0, -5.0);

    // Sisi kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -10.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-5.0, 10.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-5.0, 10.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, -10.0, -5.0);

    // Sisi kanan (dengan lubang hitam di sepertiga bagian atas)
    // Bagian atas dengan lubang hitam
    glColor3f(0.5, 0.5, 0.5); // Kembali ke abu-abu
    glTexCoord2f(0.0, 1.0); glVertex3f(5.0, 10.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 10.0, -5.0);
    glTexCoord2f(1.0, 0.5); glVertex3f(5.0, 5.0, -5.0);
    glTexCoord2f(0.0, 0.5); glVertex3f(5.0, 5.0, 5.0);

    // Bagian hitam (lubang)
    glColor3f(0.0, 0.0, 0.0); // Hitam untuk lubang
    glVertex3f(5.1, 3.0, -3.0);
    glVertex3f(5.1, 3.0, 3.0);
    glVertex3f(5.1, 7.0, 3.0);
    glVertex3f(5.1, 7.0, -3.0);

    // Kembali ke abu-abu
    glColor3f(0.5, 0.5, 0.5);
    // Bagian bawah
    glTexCoord2f(0.0, 0.5); glVertex3f(5.0, -10.0, -5.0);
    glTexCoord2f(1.0, 0.5); glVertex3f(5.0, 3.0, -5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, 3.0, 5.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(5.0, -10.0, 5.0);

    // Sisi atas
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 10.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 10.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, 10.0, -5.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, 10.0, -5.0);

    // Sisi bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -10.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -10.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, -10.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, -10.0, -5.0);

    glEnd();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void meja() {
    //bagian utama meja
    glPushMatrix();
    glColor3f(0.7, 0.5, 0.3);
    glTranslatef(-16.0, -3.0, -66.0); // Kanan, bawah, depan
    glEnable(GL_TEXTURE_2D);          // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture3);

    //****** Sisi depan meja******
    glBegin(GL_QUADS);
    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(-35, 16, 12);
    glTexCoord2f(1.0, 0.0); glVertex3f(35, 16, 12);
    glTexCoord2f(1.0, 1.0); glVertex3f(35, -16, 12);
    glTexCoord2f(0.0, 1.0); glVertex3f(-35, -16, 12);
    
    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(-35, 16, -12);
    glTexCoord2f(1.0, 0.0); glVertex3f(35, 16, -12);
    glTexCoord2f(1.0, 1.0); glVertex3f(35, -16, -12);
    glTexCoord2f(0.0, 1.0); glVertex3f(-35, -16, -12);
    
    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(-35, 16, 12);
    glTexCoord2f(1.0, 0.0); glVertex3f(-35, -16, 12);
    glTexCoord2f(1.0, 1.0); glVertex3f(-35, -16, -12);
    glTexCoord2f(0.0, 1.0); glVertex3f(-35, 16, -12);
    
    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(35, 16, 12);
    glTexCoord2f(1.0, 0.0); glVertex3f(35, -16, 12);
    glTexCoord2f(1.0, 1.0); glVertex3f(35, -16, -12);
    glTexCoord2f(0.0, 1.0); glVertex3f(35, 16, -12);
    
    // Bagian atas
    glTexCoord2f(0.0, 0.0); glVertex3f(-35, 16, 12);
    glTexCoord2f(1.0, 0.0); glVertex3f(35, 16, 12);
    glTexCoord2f(1.0, 1.0); glVertex3f(35, 16, -12);
    glTexCoord2f(0.0, 1.0); glVertex3f(-35, 16, -12);
    
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();

    //******kanan meja****** 
    glPushMatrix();
    glColor3f(0.8, 0.5, 0.3);
    glTranslatef(-41, -3.0, -83.0); // Kanan, bawah, depan
    glEnable(GL_TEXTURE_2D);        // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture3);
    
    glBegin(GL_QUADS);
    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(-10, 16, 8);
    glTexCoord2f(1.0, 0.0); glVertex3f(10, 16, 8);
    glTexCoord2f(1.0, 1.0); glVertex3f(10, -16, 8);
    glTexCoord2f(0.0, 1.0); glVertex3f(-10, -16, 8);
    
    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(-10, 16, -8);
    glTexCoord2f(1.0, 0.0); glVertex3f(10, 16, -8);
    glTexCoord2f(1.0, 1.0); glVertex3f(10, -16, -8);
    glTexCoord2f(0.0, 1.0); glVertex3f(-10, -16, -8);
    
    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(-10, 16, 8);
    glTexCoord2f(1.0, 0.0); glVertex3f(-10, -16, 8);
    glTexCoord2f(1.0, 1.0); glVertex3f(-10, -16, -8);
    glTexCoord2f(0.0, 1.0); glVertex3f(-10, 16, -8);
    
    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(10, 16, 8);
    glTexCoord2f(1.0, 0.0); glVertex3f(10, -16, 8);
    glTexCoord2f(1.0, 1.0); glVertex3f(10, -16, -8);
    glTexCoord2f(0.0, 1.0); glVertex3f(10, 16, -8);
    
    // Bagian atas
    glTexCoord2f(0.0, 0.0); glVertex3f(-10, 16, 8);
    glTexCoord2f(1.0, 0.0); glVertex3f(10, 16, 8);
    glTexCoord2f(1.0, 1.0); glVertex3f(10, 16, -8);
    glTexCoord2f(0.0, 1.0); glVertex3f(-10, 16, -8);
    
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();

}

void logo()
{
    //******Menggambar tanda tambah horizontal******
    glPushMatrix();
    glTranslatef(0.0, 45.0, -99.0); // Posisi untuk tanda tambah horizontal
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture6);

    // Bagian horizontal tanda tambah (ditengah)
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -2.0, 1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -2.0, 1.0);

    // Belakang
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 2.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 2.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -2.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -2.0, -1.0);

    // Atas
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, 2.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, 2.0, -1.0);

    // Bawah
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, -2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, -2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -2.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -2.0, -1.0);

    // Kiri
    glTexCoord2f(0.0, 1.0); glVertex3f(-5.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-5.0, 2.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-5.0, -2.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-5.0, -2.0, 1.0);

    // Kanan
    glTexCoord2f(0.0, 1.0); glVertex3f(5.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(5.0, 2.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(5.0, -2.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(5.0, -2.0, 1.0);

    glEnd();

    //******Bagian vertikal tanda tambah (ditengah)******
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 1.0); glVertex3f(-2.0, 5.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(2.0, 5.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(2.0, -5.0, 1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-2.0, -5.0, 1.0);

    // Belakang
    glTexCoord2f(0.0, 1.0); glVertex3f(-2.0, 5.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(2.0, 5.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(2.0, -5.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-2.0, -5.0, -1.0);

    // Atas
    glTexCoord2f(0.0, 1.0); glVertex3f(-2.0, 5.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(2.0, 5.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(2.0, 5.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-2.0, 5.0, -1.0);

    // Bawah
    glTexCoord2f(0.0, 1.0); glVertex3f(-2.0, -5.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(2.0, -5.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(2.0, -5.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-2.0, -5.0, -1.0);

    // Kiri
    glTexCoord2f(0.0, 1.0); glVertex3f(-2.0, 5.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-2.0, 5.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-2.0, -5.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-2.0, -5.0, 1.0);

    // Kanan
    glTexCoord2f(0.0, 1.0); glVertex3f(2.0, 5.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(2.0, 5.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(2.0, -5.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(2.0, -5.0, 1.0);

    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();
}

void pintu() {
    glPushMatrix();
    glTranslatef(43, 33.0, -99.0);
    glEnable(GL_TEXTURE_2D); // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture3);
    
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(-15.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(15.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(15.0, -50.0, 1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-15.0, -50.0, 1.0);

    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(-15.0, 2.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(15.0, 2.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(15.0, -50.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-15.0, -50.0, -1.0);

    // Atas
    glTexCoord2f(0.0, 0.0); glVertex3f(-15.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(15.0, 2.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(15.0, 2.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-15.0, 2.0, -1.0);

    // Bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(-15.0, -50.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(15.0, -50.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(15.0, -50.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-15.0, -50.0, -1.0);

    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(-15.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-15.0, 2.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-15.0, -50.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-15.0, -50.0, 1.0);

    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(15.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(15.0, 2.0, -1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(15.0, -50.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(15.0, -50.0, 1.0);

    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();
}

void kursi() {

    glPushMatrix();
    glTranslated(-95.0, -6.0, -50.0);
    glColor3f(1.0, 1.0, 1.0);

    // Aktifkan tekstur
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture5);

    //*batang 1*
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(69.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 80.0);

    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -2.0, 77.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(69.0, -10.0, 77.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 77.0);

    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(72.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(72.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 77.0);

    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(69.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(69.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(69.0, -2.0, 77.0);

    // Bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -10.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(72.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(69.0, -10.0, 77.0);
    glEnd();

    //*batang 2*
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(54.0, -2.0, 80.0);

    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.0, 77.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -10.0, 77.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(54.0, -2.0, 77.0);

    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(54.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(54.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(54.0, -2.0, 77.0);

    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(51.0, -2.0, 77.0);

    // Bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -10.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(54.0, -10.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 77.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(51.0, -10.0, 77.0);
    glEnd();

    //*batang 3*
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.0, 18.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -10.0, 18.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 18.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(54.0, -2.0, 18.0);

    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -10.0, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(54.0, -2.0, 15.0);

    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(54.0, -2.0, 18.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(54.0, -10.0, 18.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(54.0, -2.0, 15.0);

    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.0, 18.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -10.0, 18.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -10.0, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(51.0, -2.0, 15.0);

    // Bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -10.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(54.0, -10.0, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(54.0, -10.0, 18.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(51.0, -10.0, 18.0);
    glEnd();

    //*batang 4*
    glBegin(GL_QUADS);

    // Depan
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -2.0, 18.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(69.0, -10.0, 18.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 18.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 18.0);

    // Belakang
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -2.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(69.0, -10.0, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 15.0);

    // Kanan
    glTexCoord2f(0.0, 0.0); glVertex3f(72.0, -2.0, 18.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(72.0, -10.0, 18.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 15.0);

    // Kiri
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -2.0, 18.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(69.0, -10.0, 18.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(69.0, -10.0, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(69.0, -2.0, 15.0);

    // Bawah
    glTexCoord2f(0.0, 0.0); glVertex3f(69.0, -10.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(72.0, -10.0, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -10.0, 18.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(69.0, -10.0, 18.0);
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur

    //*busa*
    // Atas
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture4);

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(72.0, -2.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -2.0, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -2.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.0, 80.0);
    glEnd();

    // Bawah
    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(72.0, -2.5, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -2.5, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -2.5, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.5, 80.0);
    glEnd();

    // Depan
    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.5, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -2.0, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(72.0, -2.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(72.0, -2.5, 80.0);
    glEnd();

    // Sandaran
    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(45.0, 12.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(51.0, -2.0, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -2.0, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(45.0, 12.0, 80.0);
    glEnd();

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(42.0, 12.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(48.0, -2.2, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(48.0, -2.2, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(42.0, 12.0, 80.0);
    glEnd();

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(51.0, -2.2, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(48.0, -2.2, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(48.0, -2.2, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(51.0, -2.2, 80.0);
    glEnd();

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(42.0, 12.0, 80.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(48.0, -2.2, 80.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -2.2, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(45.0, 12.0, 80.0);
    glEnd();

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(42.0, 12.0, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(48.0, -2.2, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(51.0, -2.2, 15.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(45.0, 12.0, 15.0);
    glEnd();

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(45.0, 12.1, 15.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(42.0, 12.1, 15.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(42.0, 12.1, 80.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(45.0, 12.1, 80.0);
    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur

    glPopMatrix();
}

void jam()
{
    glPushMatrix();
    glTranslated(-58.0, 55.0, -15.0);

    glBegin(GL_QUADS);

    // Gambar kotak sebagai dasar jam
    // Silakan sesuaikan ukuran dan posisi sesuai kebutuhan
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 1.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-1.0, 1.0, -5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(-1.0, -5.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -5.0, 5.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-58.0, 55.0, -15.0);
    glEnable(GL_TEXTURE_2D); // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture7);

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(1.0, 5.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 5.0, -5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -5.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(1.0, -5.0, 5.0);

    glEnd();
    glDisable(GL_TEXTURE_2D); // Nonaktifkan tekstur
    glPopMatrix();

    glPushMatrix();
    glTranslated(-58.0, 55.0, -15.0);

    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 5.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 5.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, 5.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, 5.0, -5.0);

    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, -5.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, -5.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -5.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -5.0, -5.0);

    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 5.0, 5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 5.0, 5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -5.0, 5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -5.0, 5.0);

    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 5.0, -5.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(1.0, 5.0, -5.0);
    glTexCoord2f(1.0, 1.0); glVertex3f(1.0, -5.0, -5.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, -5.0, -5.0);

    glEnd();
    glPopMatrix();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //============================ Ruangan ======================
    ubin();
    dinding();
    tempatsampah();
    meja();
    logo();
    pintu();
    kursi();
    jam();

    glFlush();
    glutSwapBuffers();
}

//** fungsi reshape ****
void reshape(int w, int h)
{
    // Mengatur viewport ke ukuran jendela
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);

    // Mengatur proyeksi perspektif
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 400.0);

    // Kembali ke mode model-view
    glMatrixMode(GL_MODELVIEW);
}

********
//** fungsi keyboard **
void keyboard(unsigned char key, int x, int y)
{
    float cameraSpeed = 1.0f;
    switch (key)
    {
    case 'w':
    case 'W':
        cameraPosX += cameraSpeed * sin(cameraYaw * M_PI / 180.0f);
        cameraPosZ -= cameraSpeed * cos(cameraYaw * M_PI / 180.0f);
        break;
    case 's':
    case 'S':
        cameraPosX -= cameraSpeed * sin(cameraYaw * M_PI / 180.0f);
        cameraPosZ += cameraSpeed * cos(cameraYaw * M_PI / 180.0f);
        break;
    case 'a':
    case 'A':
        cameraPosX -= cameraSpeed * cos(cameraYaw * M_PI / 180.0f);
        cameraPosZ -= cameraSpeed * sin(cameraYaw * M_PI / 180.0f);
        break;
    case 'd':
    case 'D':
        cameraPosX += cameraSpeed * cos(cameraYaw * M_PI / 180.0f);
        cameraPosZ += cameraSpeed * sin(cameraYaw * M_PI / 180.0f);
        break;
    }
    updateCamera();
    glutPostRedisplay();
}

void mouseMotion(int x, int y) {
    static int lastX = -1, lastY = -1;

    if (lastX == -1) {
        lastX = x;
        lastY = y;
        return;
    }

    int deltaX = x - lastX;
    int deltaY = y - lastY;

    lastX = x;
    lastY = y;

    cameraYaw += deltaX * 0.1f;
    cameraPitch += deltaY * 0.1f;  // Dibalik arah gerakan mouse untuk pitch

    if (cameraPitch > 89.0f) cameraPitch = 89.0f;
    if (cameraPitch < -89.0f) cameraPitch = -89.0f;

    updateCamera();
    glutPostRedisplay();
}


//****************
// ***Fungsi untuk menangani event mouse***
void mouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == 3) { // Scroll up
            cameraPosY += 1.0f;
        } else if (button == 4) { // Scroll down
            cameraPosY -= 1.0f;
        }
        updateCamera();
        glutPostRedisplay(); // Menggambarkan ulang layar
    }
}

//**********
//~~~~~~~~~~~~~~~~~ad
//~~~~~~~~~~~ PROGRAM UTAMA ~~~~~~~~~~~~~~
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
    glutMotionFunc(mouseMotion);
    init();
    glutMainLoop();
}
