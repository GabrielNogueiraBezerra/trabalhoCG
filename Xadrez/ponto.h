#ifndef PONTO_H
#define PONTO_H


class Ponto{
    private:
        float coord[3];
    public:
        Ponto();
        void setCoord(float coordX, float coordY, float coordZ);
        float* getCoord();
        float x();
        float y();
        float z();
};

#endif // PONTO_H
