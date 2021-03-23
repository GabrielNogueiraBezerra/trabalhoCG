#ifndef CUBO_H
#define CUBO_H

#include "ponto.h"
#include "cor.h"

class Cubo{
    private:
        float lado;
        Ponto vertices[8];
        int   faces[6][4];
        Cor   facesCor[6];

        void iniciaVertices();
        void iniciaFaces();
        void setFaceVertices(int face, int v1, int v2, int v3, int v4);
    public:
        Cubo();

        void desenha();
};

#endif // CUBO_H
