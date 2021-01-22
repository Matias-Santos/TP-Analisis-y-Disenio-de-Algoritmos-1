#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Punto.h"
#include "Figura2d.h"
#include <cmath>

class Triangulo : public Figura2d
{
public:
    Triangulo() : Figura2d("Triangulo") {};
    Triangulo(const Punto&a, const Punto&b, const Punto&c):Figura2d("Triangulo")
    {
        if ((a!=b) && (b!=c) && (c!=a))
        {
            this->a=a;
            this->b=b;
            this->c=c;
        }
    };
    ~Triangulo(){};
    void modificarPunto(const int&x,const Punto&a);
    float areaFigura()const;
    const Punto & devolverPunto(int x)const;
    Triangulo & operator=(const Triangulo&Tri);
private:
    Punto a;
    Punto b;
    Punto c;
};

#endif // TRIANGULO_H
