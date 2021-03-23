#include "cubo.h"

#include <GL/gl.h>

void Cubo::iniciaVertices(){
    vertices[0].setCoord(-lado, -lado, -lado);
    vertices[1].setCoord(lado, -lado, -lado);
    vertices[2].setCoord(lado, lado, -lado);
    vertices[3].setCoord(-lado, lado, -lado);
    vertices[4].setCoord(-lado, -lado, lado);
    vertices[5].setCoord(lado, -lado, lado);
    vertices[6].setCoord(lado, lado, lado);
    vertices[7].setCoord(-lado, lado, lado);
}

void Cubo::iniciaFaces(){
    setFaceVertices(0, 0, 2, 6, 5); facesCor[0].setRGB(255, 0, 0);
    setFaceVertices(1, 0, 4, 7, 3); facesCor[0].setRGB(255, 127, 0);
    setFaceVertices(2, 4, 5, 6, 7); facesCor[0].setRGB(191, 255, 0);
    setFaceVertices(3, 5, 1, 2, 6); facesCor[0].setRGB(0, 255, 0);
    setFaceVertices(4, 2, 3, 7, 6); facesCor[0].setRGB(0, 255, 255);
    setFaceVertices(5, 0, 1, 5, 4); facesCor[0].setRGB(0, 0, 255);
}

void Cubo::setFaceVertices(int face, int v1, int v2, int v3, int v4){
    faces[face][0] = v1;
    faces[face][1] = v2;
    faces[face][2] = v3;
    faces[face][3] = v4;
}

Cubo::Cubo(){
    lado =50;
}

void Cubo::desenha(){
    glBegin(GL_QUADS);
        for (int i = 0; i < 6; i++){
            glColor3fv(facesCor[i].getColor());
            for (int j = 0; j < 4; j++){
                glVertex3fv(vertices[faces[i][j]].getCoord());
            }
        }
    glEnd();
}
