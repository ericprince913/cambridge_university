#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
const double PI = 3.141592653589793;
int titik;

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

void mouse(int button, int state, int x, int y);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;


void lingkaran(int nilai_radius, int total, int koordinatX, int koordinatY, int sumbuZ)
{
    glBegin(GL_POLYGON);
    for (titik = 0; titik <= 360; titik++)
    {
        float angle = titik * (2 *PI / 180);
        float nilai_x = koordinatX + nilai_radius * cos(angle);
        float nilai_y = koordinatY + nilai_radius * sin(angle);
        glVertex3f(nilai_x, nilai_y, sumbuZ);
    }
    glEnd();
}


void bulat() {
    glColor3f(1.0, 1.0, 1.0);

    lingkaran(10, 30, -5, 42, 115);

    lingkaran(10, 30, -5, 0, 115);

    glColor3f(1.0, 1.0, 0.0);

    lingkaran(10, 30, -5, 130, 130);
    
}


void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);

}



void tiang() {
    GLUquadric* quadric = gluNewQuadric();
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(-20, 115, -12);
    glScalef(2, 2, 4);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(-140, 120, -90);
    glScalef(5, 5, 10);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(140, 120, -90);
    glScalef(5, 5, 10);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(140, 160, -90);
    glScalef(5, 5, 10);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(-140, 200, -90);
    glScalef(5, 5, 10);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(140, 200, -90);
    glScalef(5, 5, 10);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(-140, 160, -90);
    glScalef(5, 5, 10);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

}

void persegi() {
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(-140, 90, 120);//cube
    glScaled(20.0, 12, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-140, 90, 160);//cube
    glScaled(20.0, 12, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-140, 90, 200);//cube
    glScaled(20.0, 12, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    //----------------------------//
    glPushMatrix();
    glTranslatef(-140, -30, 120);//cube
    glScaled(20.0, 25, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-140, -30, 160);//cube
    glScaled(20.0, 25, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-140, -30, 200);//cube
    glScaled(20.0, 25, 20);
    glutSolidCube(1.0);
    glPopMatrix();
 //--------------------------------------------//

    glPushMatrix();
    glTranslatef(140, 90, 120);//cube
    glScaled(20.0, 12, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140, 90, 160);//cube
    glScaled(20.0, 12, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140, 90, 200);//cube
    glScaled(20.0, 12, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140, -30, 120);//cube
    glScaled(20.0, 25, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140, -30, 160);//cube
    glScaled(20.0, 25, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140, -30, 200);//cube
    glScaled(20.0, 25, 20);
    glutSolidCube(1.0);
    glPopMatrix();
}

void tiang3() {
    GLUquadric* quadric = gluNewQuadric();
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glRotatef(90,0, 90, 0);
    glTranslatef(-103, -13, -110);
    glScalef(2, 2, 16.1);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

}

void bus()
{
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(-25, -30, -80);//cube
    glScaled(70, 50, 30);
    glutSolidCube(1.0);
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(5, -25.0, -96);
    glVertex3f(5, -8.0, -96);
    glVertex3f(-20, -8.0, -96);
    glVertex3f(-20, -25.0, -96);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25, -25.0, -96);
    glVertex3f(-25, -8.0, -96.0);
    glVertex3f(-55, -8.0, -96.0);
    glVertex3f(-55, -25.0, -96.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25, -25.0, -64);
    glVertex3f(-25, -8.0, -64);
    glVertex3f(-55, -8.0, -64);
    glVertex3f(-55, -25.0, -64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(5, -25.0, -64);
    glVertex3f(5, -8.0, -64);
    glVertex3f(-20, -8.0, -64);
    glVertex3f(-20, -25.0, -64);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);

    lingkaran(7, 20, -45, -33, -64);
    lingkaran(7, 20, -5, -33, -64);
    lingkaran(7, 20, -45, -33, -96);
    lingkaran(7, 20, -5, -33, -96);
}

void patung() {

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-5, -35, 240);//cube
    glScaled(20, 10, 20);
    glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-5, -5, 235);//cube
    glScaled(12, 50, 5);
    glutSolidCube(1.0);
    glPopMatrix();

}

void kursi() {

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.0);
    glVertex3f(-100, -30, 200);
    glVertex3f(-70.0, -30, 200);
    glVertex3f(-70.0, -25, 190.0);
    glVertex3f(-100.0, -25, 190);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.0);
    glVertex3f(-100, -10, 190);
    glVertex3f(-100, -23, 190);
    glVertex3f(-70, -23, 190.0);
    glVertex3f(-70, -10, 190);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.0);
    glVertex3f(-100, -20, 190);
    glVertex3f(-100, -40, 190);
    glVertex3f(-98, -40, 190.0);
    glVertex3f(-98, -20, 190);

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.0);
    glVertex3f(-72, -20, 190);
    glVertex3f(-72, -40, 190);
    glVertex3f(-70, -40, 190.0);
    glVertex3f(-70, -20, 190);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.0);
    glVertex3f(-99, -25, 200);
    glVertex3f(-99, -40, 200);
    glVertex3f(-97, -40, 200);
    glVertex3f(-97, -25, 200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.0);
    glVertex3f(-73, -25, 200);
    glVertex3f(-73, -40, 200);
    glVertex3f(-71, -40, 200);
    glVertex3f(-71, -25, 200);
    glEnd();
}


void tiang2() {
    GLUquadric* quadric = gluNewQuadric();
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glRotatef(90, 1, 0, 0);
    glTranslatef(10, 115, -12);
    glScalef(2, 2, 4);
    gluCylinder(quadric, 1, 1, 13, 30, 40);
    glPopMatrix();

}



void atastiang() {
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8, 0.9);
    glVertex3f(-22.0, 22.0, 115.0);
    glVertex3f(-22.0, 12.0, 115.0);
    glVertex3f(12.0, 12.0, 115.0);
    glVertex3f(12.0, 22.0, 115.0);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-22.0, 22.0, 115.0);
    glVertex3f(-22.0, 12.0, 115.0);
    glVertex3f(12.0, 12.0, 115.0);
    glVertex3f(12.0, 22.0, 115.0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-22.0, 22.0, 111.0);
    glVertex3f(-22.0, 12.0, 111.0);
    glVertex3f(-22.0, 12.0, 115.0);
    glVertex3f(-22.0, 22.0, 115.0);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 0.8f);
    glVertex3f(-22.0, 22.0, 111.0);
    glVertex3f(-22.0, 12.0, 111.0);
    glVertex3f(-22.0, 12.0, 115.0);
    glVertex3f(-22.0, 22.0, 115.0);
    glEnd();

   

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(12.0, 22.0, 115.0);
    glVertex3f(12.0, 12.0, 115.0);
    glVertex3f(12.0, 12.0, 111.0);
    glVertex3f(12.0, 22.0, 111.0);
    glEnd();
   

  
 
    
}


void segitiga() {
      //Sisi-sisi Prisma
    glBegin(GL_TRIANGLES);

    //Segitiga Warna Merah
    glColor3f(0.7, 0.8, 0.9);
    glVertex3f(-22.0f, 22.0f, 115.0f);
    glVertex3f(12.0f, 22.0f, 115.0f);
    glVertex3f(-5.0f, 30.0f, 115.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);

    //Segitiga Warna Merah
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-22.0f, 22.0f, 117.0f);
    glVertex3f(12.0f, 22.0f, 117.0f);
    glVertex3f(-5.0f, 30.0f, 117.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-22.0f, 22.0f, 111.0f);
    glVertex3f(12.0f, 22.0f, 111.0f);
    glVertex3f(-5.0f, 30.0f, 111.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);

    //Segitiga Warna Merah
    glColor3f(1.0f, 1.0f, 0.8f);
    glVertex3f(-22.0f, 22.0f, 111.0f);
    glVertex3f(12.0f, 22.0f, 111.0f);
    glVertex3f(-5.0f, 30.0f, 111.0f);
    glEnd();

  
}

void segitiga2() {
    //Sisi-sisi Prisma
    glBegin(GL_TRIANGLES);

    //Segitiga Warna Merah
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-42.0f, 57.0f, 110.0f);
    glVertex3f(32.0f, 57.0f, 110.0f);
    glVertex3f(-5.0f, 80.0f, 110.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);

    //Segitiga Warna Merah
    glColor3f(1.0f, 1.0f, 0.8f);
    glVertex3f(-42.0f, 57.0f, 110.0f);
    glVertex3f(32.0f, 57.0f, 110.0f);
    glVertex3f(-5.0f, 80.0f, 110.0f);
    glEnd();

}

void jendela() {
    //____________________________________//
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-38.0, 52.0, 115.0);
    glVertex3f(-38.0, 30.0, 115.0);
    glVertex3f(-25.0, 30.0, 115.0);
    glVertex3f(-25.0, 52.0, 115.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-38.0, 20.0, 115.0);
    glVertex3f(-38.0, -2.0, 115.0);
    glVertex3f(-25.0, -2.0, 115.0);
    glVertex3f(-25.0, 20.0, 115.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-38.0, -12.0, 115.0);
    glVertex3f(-38.0, -34.0, 115.0);
    glVertex3f(-25.0, -34.0, 115.0);
    glVertex3f(-25.0, -12.0, 115.0);
    glEnd();

    //____________________________________//

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-58.0, 52.0, 101.0);
    glVertex3f(-58.0, 30.0, 101.0);
    glVertex3f(-45.0, 30.0, 101.0);
    glVertex3f(-45.0, 52.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-58.0, 20.0, 101.0);
    glVertex3f(-58.0, -2.0, 101.0);
    glVertex3f(-45.0, -2.0, 101.0);
    glVertex3f(-45.0, 20.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-58.0, -15.0, 101.0);
    glVertex3f(-58.0, -34.0, 101.0);
    glVertex3f(-45.0, -34.0, 101.0);
    glVertex3f(-45.0, -15.0, 101.0);
    glEnd();

    //____________________________________//

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-78.0, 52.0, 101.0);
    glVertex3f(-78.0, 30.0, 101.0);
    glVertex3f(-65.0, 30.0, 101.0);
    glVertex3f(-65.0, 52.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-78.0, 20.0, 101.0);
    glVertex3f(-78.0, -2.0, 101.0);
    glVertex3f(-65.0, -2.0, 101.0);
    glVertex3f(-65.0, 20.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-78.0, -15.0, 101.0);
    glVertex3f(-78.0, -34.0, 101.0);
    glVertex3f(-65.0, -34.0, 101.0);
    glVertex3f(-65.0, -15.0, 101.0);
    glEnd();

    //____________________________________//
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-98.0, 52.0, 101.0);
    glVertex3f(-98.0, 30.0, 101.0);
    glVertex3f(-85.0, 30.0, 101.0);
    glVertex3f(-85.0, 52.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-98.0, 20.0, 101.0);
    glVertex3f(-98.0, -2.0, 101.0);
    glVertex3f(-85.0, -2.0, 101.0);
    glVertex3f(-85.0, 20.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-98.0, -15.0, 101.0);
    glVertex3f(-98.0, -34.0, 101.0);
    glVertex3f(-85.0, -34.0, 101.0);
    glVertex3f(-85.0, -15.0, 101.0);
    glEnd();

    //____________________________________//

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(28.0, 52.0, 115.0);
    glVertex3f(28.0, 30.0, 115.0);
    glVertex3f(15.0, 30.0, 115.0);
    glVertex3f(15.0, 52.0, 115.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(28.0, 20.0, 115.0);
    glVertex3f(28.0, -2.0, 115.0);
    glVertex3f(15.0, -2.0, 115.0);
    glVertex3f(15.0, 20.0, 115.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(28.0, -15.0, 115.0);
    glVertex3f(28.0, -34.0, 115.0);
    glVertex3f(15.0, -34.0, 115.0);
    glVertex3f(15.0, -15.0, 115.0);
    glEnd();

    //____________________________________//

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(48.0, 52.0, 101.0);
    glVertex3f(48.0, 30.0, 101.0);
    glVertex3f(35.0, 30.0, 101.0);
    glVertex3f(35.0, 52.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(48.0, 20.0, 101.0);
    glVertex3f(48.0, -2.0, 101.0);
    glVertex3f(35.0, -2.0, 101.0);
    glVertex3f(35.0, 20.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(48.0, -15.0, 101.0);
    glVertex3f(48.0, -34.0, 101.0);
    glVertex3f(35.0, -34.0, 101.0);
    glVertex3f(35.0, -15.0, 101.0);
    glEnd();

    //____________________________________//

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(68.0, 52.0, 101.0);
    glVertex3f(68.0, 30.0, 101.0);
    glVertex3f(55.0, 30.0, 101.0);
    glVertex3f(55.0, 52.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(68.0, 20.0, 101.0);
    glVertex3f(68.0, -2.0, 101.0);
    glVertex3f(55.0, -2.0, 101.0);
    glVertex3f(55.0, 20.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(68.0, -15.0, 101.0);
    glVertex3f(68.0, -34.0, 101.0);
    glVertex3f(55.0, -34.0, 101.0);
    glVertex3f(55.0, -15.0, 101.0);
    glEnd();

    //____________________________________//

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(88.0, 52.0, 101.0);
    glVertex3f(88.0, 30.0, 101.0);
    glVertex3f(75.0, 30.0, 101.0);
    glVertex3f(75.0, 52.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(88.0, 20.0, 101.0);
    glVertex3f(88.0, -2.0, 101.0);
    glVertex3f(75.0, -2.0, 101.0);
    glVertex3f(75.0, 20.0, 101.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(88.0, -15.0, 101.0);
    glVertex3f(88.0, -34.0, 101.0);
    glVertex3f(75.0, -34.0, 101.0);
    glVertex3f(75.0, -15.0, 101.0);
    glEnd();

}

void pagaratas() {
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(-107, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-87, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-67, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-47, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-27, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(17, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(57, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(77, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(97, 62, 100);//cube
    glScaled(5.0, 5.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5, 66, 100);//cube
    glScaled(210.0, 2.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

   }

void pintu() {
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-15, -39, 115.0);
    glVertex3f(-15, 0, 115.0);
    glVertex3f(5, 0, 115.0);
    glVertex3f(5, -39, 115.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.8f);
    glVertex3f(-5, 10, 116.0);
    glVertex3f(-5, -39, 116.0);
    glEnd();


}
void cerobong() {
    glColor3f(0.8, 0.8, 0.8);
    glPushMatrix();
    glTranslatef(-97, 66, 50);//cube
    glScaled(20.0, 50.0, 15.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-47, 66, 50);//cube
    glScaled(20.0, 50.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7, 66, 50);//cube
    glScaled(20.0, 50.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37, 66, 50);//cube
    glScaled(20, 50.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(87, 66, 50);//cube
    glScaled(20, 50.0, 5.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(-97, 93, 50);//cube
    glScaled(30.0, 5.0, 18);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-47, 93, 50);//cube
    glScaled(30.0, 5.0, 18);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7, 93, 50);//cube
    glScaled(30.0, 5.0, 18);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37, 93, 50);//cube
    glScaled(30.0, 5.0, 18);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(87, 93, 50);//cube
    glScaled(30.0, 5.0, 18);
    glutSolidCube(1.0);
    glPopMatrix();


}
void dinner()
{
    GLfloat lightPosition[] = {
        100,20,-100,150
    };
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
    glPushMatrix();
 glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-110.0, -40.0, 100.0);
    glVertex3f(-110.0, 60.0, 100.0);
    glVertex3f(100.0, 60.0, 100.0);
    glVertex3f(100.0, -40.0, 100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-110.0, -40.0, 0.0);
    glVertex3f(-110.0, 60.0, 0.0);
    glVertex3f(100.0, 60.0, 0.0);
    glVertex3f(100.0, -40.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(-110.0, -40.0, 0.0);
    glVertex3f(-110.0, 60.0, 0.0);
    glVertex3f(-110.0, 60.0, 100.0);
    glVertex3f(-110.0, -40.0, 100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(100.0, -40.0, 100.0);
    glVertex3f(100.0, 60.0, 100.0);
    glVertex3f(100.0, 60.0, 0.0);
    glVertex3f(100.0, -40.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(100.0, -40.0, 100.0);
    glVertex3f(-110.0, -40.0, 100.0);
    glVertex3f(-110.0, -40.0, 0.0);
    glVertex3f(100.0, -40.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.95);
    glVertex3f(100.0, 40.0, 100.0);
    glVertex3f(-110.0, 40.0, 100.0);
    glVertex3f(-110.0, 40.0, 0.0);
    glVertex3f(100.0, 40.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1, 1.0, 0.0);
    glVertex3f(150.0, -41.0, 250.0);
    glVertex3f(-150.0, -41.0, 250.0);
    glVertex3f(-150.0, -41.0, -100.0);
    glVertex3f(150.0, -41.0, -100.0);
    glEnd();


     
    glColor3f(1.0f, 0.9f, 1.0f);
    glPushMatrix();
    glTranslatef(-5, 5, 105);//cube
    glScaled(74, 105, 10);
    glutSolidCube(1.0);
    glPopMatrix();


    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.3);
    glVertex3f(-110.0, -40.0, 100.5);
    glVertex3f(-110.0, -13.0, 100.5);
    glVertex3f(100.0, -13.0, 100.5);
    glVertex3f(100.0, -40.0, 100.5);
    glEnd();

  
    bulat();
   jendela();
   pintu();
    tiang();
    tiang2();
    tiang3();
    atastiang();
    segitiga();
    pagaratas();
    cerobong();
    segitiga2();
    kursi();
    persegi();
    patung();
    bus();
    glPopMatrix();


  
}
void tampil(void)
{
    glPushMatrix();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    gluLookAt(0.0f, 3.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 0, 1, 0);
    glRotatef(yrot, 1, 0, 0);
    dinner();
    glEnd();
    glPopMatrix();
    glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}


void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = xrot = x;
        ydiff = yrot = y;
    }
    else {
        mouseDown = false;
    }
}


void mouseMotion(int x, int y)
{
    if (mouseDown)
    {
        xrot = x;
        yrot = y;

        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow(" eric secada purba - 672018343 ");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();

    return 0;
}
