#ifndef MEUCANVAS_H
#define MEUCANVAS_H

#include <QGLWidget>

#include "cubo.h"
#include "ponto.h"

class MeuCanvas : public QGLWidget{
    private:
        Ponto camera;
        Cubo cubo;
    public:
        MeuCanvas(QWidget *parent = 0);
    protected:
        void initalizeGL();
        void resizeGL(int w, int h);
        void paintGL();

    signals:
    public slots:
      void alterarCameraCoordX(int x);
      void alterarCameraCoordY(int y);
      void alterarCameraCoordZ(int z);


};

#endif // MEUCANVAS_H
