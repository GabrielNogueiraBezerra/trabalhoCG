#ifndef COR_H
#define COR_H


class Cor{
    private:
        float valor[3];
    public:
        Cor();
        Cor(int r, int g, int b);

        int getR();
        int getG();
        int getB();

        void setRGB(int r, int g, int b);
        float *getColor();

};

#endif // COR_H
