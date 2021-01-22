#include "Triangulo.h"

void Triangulo::modificarPunto(const int&x,const Punto&a)
{
    //Modifica el punto x(1,2 o 3) como la suma entre el original, y el nuevo
    switch (x)
    {
    case 1:
        this->a + a;
        break;
    case 2:
        this->b + b;
        break;
    case 3:
        this->c + c;
        break;
    default:
        break;
    }
}
float Triangulo::areaFigura()const
{
    //calcula el area del triangulo dado, a partir de la formula de Heron
    float a=this->a.distancia(this->b);
    float b=this->b.distancia(this->c);
    float c=this->c.distancia(this->a);
    float s=(a+b+c)/2;
    float x=sqrt(s*(s-a)*(s-b)*(s-c));
    return x;
}
const Punto & Triangulo::devolverPunto(int x)const
{
    //Devuelve uno de los 3 puntos del triangulo, segun la eleccion del usuario
    switch (x)
    {
    case 1:
        return this->a;
        break;
    case 2:
        return this->b;
        break;
    case 3:
        return this->c;
        break;
    default:
        break;
    }
}
Triangulo & Triangulo::operator=(const Triangulo&Tri)
{
    this->a=Tri.devolverPunto(1);
    this->b=Tri.devolverPunto(2);
    this->c=Tri.devolverPunto(3);
}
