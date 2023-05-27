#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <stdio.h>
#include<cmath>


void setPixel(GLint xcoordinate, GLint ycoordinate)
{
    glBegin(GL_POINTS);
    glVertex2i(xcoordinate,ycoordinate);
    glEnd();
    glFlush();
}

int r;
static void display(void)
{
    GLint xc=150,yc=200,x,y;
    int p;
    glBegin(GL_LINES);
    glVertex2i(100,200);
    glVertex2i(200,200);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glVertex2i(150,150);
    glVertex2i(150,250);
    glEnd();
    glFlush();

    x=0;
    y=r;
    p = 1-r;
    printf("%d %d\n",x,y);
    setPixel(xc+x,yc+y);
    //setPixel(xc+y,yc+x);
    while(x<=y){
        x++;
        if(p<0){
            p = p+(2*x)+3;
        }else{
            y--;
            p = p+ 2*(x-y)+5;
        }
        setPixel(xc-x,yc+y);
        setPixel(xc-y,yc+x);
        printf("%d %d\n",x,y);
    }



}



void MyInit()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3ub( 255, 255, 255 );
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
    glMatrixMode(GL_MODELVIEW);
    glFlush();
}

int main(int argc, char *argv[])
{
    /*printf("Enter Starting Point: ");
    scanf("%d %d",&s1,&e1);
    printf("\nEnter Ending Point: ");
    scanf("%d %d",&s2,&e2);*/
    printf("Enter radius: ");
    scanf("%d",&r);
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Mid point circle algorithm");
    MyInit();
    glutDisplayFunc(display);


    glutMainLoop();

    return EXIT_SUCCESS;
}
