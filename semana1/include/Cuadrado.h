#ifndef CUADRADO_H
#define CUADRADO_H
#include "Triangulo.h"

class Cuadrado : public Figura2d
{
public:
    Cuadrado(const Punto&a,const Punto&b,const Punto&c,const Punto&d):Figura2d("Cuadrado")
    {
      //  if ((a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d))
        {
            this->a=a;
            this->b=b;
            this->c=c;
            this->d=d;
        }
    };
     Cuadrado():Figura2d("Cuadrado") {};
    ~Cuadrado() {};
    void trasladarCuadrado(const Punto&a);
    float areaFigura()const;
    const Punto & devolverPunto(int x)const;
    Cuadrado & operator=(const Cuadrado&Cua);
private:
    Punto a;
    Punto b;
    Punto c;
    Punto d;
};

#endif // CUADRADO_H
