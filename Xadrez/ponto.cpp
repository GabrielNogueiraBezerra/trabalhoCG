#include "ponto.h"

Ponto::Ponto(){

}

void Ponto::setCoord(float coordX, float coordY, float coordZ){
    coord[0] = coordX;
    coord[1] = coordY;
    coord[2] = coordZ;
}

float *Ponto::getCoord(){
    return coord;
}

float Ponto::z(){
    return coord[2];
}

float Ponto::x(){
    return coord[0];
}

float Ponto::y(){
    return coord[1];
}
