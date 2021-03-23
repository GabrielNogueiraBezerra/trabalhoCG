#include "cor.h"

Cor::Cor(){

}

Cor::Cor(int r, int g, int b){
    setRGB(r, g, b);
}

int Cor::getR(){
    return valor[0];
}

int Cor::getG(){
    return valor[1];
}

int Cor::getB(){
    return valor[2];
}

void Cor::setRGB(int r, int g, int b){
    r = r > 255 ? 255 : (r < 0 ? 0 : r);
    g = g > 255 ? 255 : (g < 0 ? 0 : g);
    b = b > 255 ? 255 : (b < 0 ? 0 : b);
    valor[0] = r/255.0;
    valor[1] = g/255.0;
    valor[2] = b/255.0;
}

float *Cor::getColor(){
    return valor;
}
