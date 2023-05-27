#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
int  width=500, height=500;
float  point_size = 2.0;
float xc,yc,r;

void input()
{
    printf("Enter Center Point: ");
    scanf("%f %f",&xc,&yc);
    printf("Enter Radius: ");
    scanf("%f",&r);
}

void re_init()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    float aspect = (float)width / (float)height;
    glOrtho(-aspect, aspect, -1, 1, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void draw_circle(int x0, int y0, int r0)
{
    float x,y;
    x=0;
    y=r0;
    float p = 1-r0;
    while(x<=y)
    {
        glBegin(GL_POINTS);
        glVertex2i(x0+x,y0+y);
        glVertex2i(x0+x,y0-y);
        glVertex2i(x0+y,y0+x);
        glVertex2i(x0+y,y0-x);
        glVertex2i(x0-x,y0+y);
        glVertex2i(x0-x,y0-y);
        glVertex2i(x0-y,y0+x);
        glVertex2i(x0-y,y0-x);
        glEnd();
        if(p<0)
        {
            p=p+2*x+3;
            x++;
        }
        else
        {
            p=p+2*(x-y)+5;
            x++;
            y=y-1;
        }
    }
    glFlush();
}
void display(void)
{
    re_init();
    ///Write your Display Code Here
    draw_circle(xc,yc,r);
}

void init(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,width,0,height);
}
int main(int argc, char** argv)
{
    //Call input function
    input();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(width,height);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Mid Point Circle Algorithm");
    init();
    glEnable(GL_POINT_SMOOTH);
    glPointSize(point_size);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
