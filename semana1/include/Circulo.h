#ifndef CIRCULO_H
#define CIRCULO_H
#include <cmath>
#include <Punto.h>
#include <Figura2d.h>

class Circulo :public Figura2d
{
public:
    Circulo(const Punto&centro,const float&radio):Figura2d("Circulo")
    {
        this->centro=centro;
        this->radio=radio;
    };
    void trasladarorigen(float x, float y);
    void modificarradio(float radio);
    const Punto & devolverorigen()const;
    const devolverradio()const;
    float areaFigura()const;

private:
    Punto centro;
    float radio;
};
#endif // CIRCULOS_H
