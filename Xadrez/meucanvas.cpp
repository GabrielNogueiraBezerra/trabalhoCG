#include "meucanvas.h"

#include <GL/glu.h>

MeuCanvas::MeuCanvas(QWidget *parent) : QGLWidget(parent){
    camera.setCoord(10,4,-5);
}

void MeuCanvas::initalizeGL(){
    glClearColor(1,1,1,1);

    glEnable(GL_DEPTH_TEST);
}

void MeuCanvas::resizeGL(int w, int h){
    glViewport(0,0,w,h);
}

void MeuCanvas::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    float largura = 2;
    float altura = largura*height()/width();

    glFrustum(-largura/2, largura/2, -altura/2, altura/2, 1, 1000000);


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(camera.x(), camera.y(), camera.z(),
              0.0,0.0,0.0,
              0.0,0.0,1.0);

    glColor3f(1,0,0);
    glBegin(GL_LINES);
        glVertex3f(0,0,0);
        glVertex3f(50,0,0);
    glEnd();
    // verde y
    glColor3f(0,1,0);
    glBegin(GL_LINES);
        glVertex3f(0,0,0);
        glVertex3f(0,50,0);
    glEnd();
    // azul z
    glColor3f(0,0,1);
    glBegin(GL_LINES);
        glVertex3f(0,0,0);
        glVertex3f(0,0,50);
    glEnd();


}


void MeuCanvas::alterarCameraCoordX(int x){
    camera.setCoord(x, camera.y(), camera.z());
    updateGL();
}

void MeuCanvas::alterarCameraCoordY(int y){
    camera.setCoord(camera.x(), y, camera.z());
    updateGL();
}

void MeuCanvas::alterarCameraCoordZ(int z){
    camera.setCoord(camera.x(), camera.y(), z);
    updateGL();
}
