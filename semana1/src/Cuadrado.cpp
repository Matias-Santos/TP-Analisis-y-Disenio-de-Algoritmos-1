#include "Cuadrado.h"

void Cuadrado::trasladarCuadrado(const Punto&a)
{

    //Suma el punto dado, con los 4 originales del objeto, para trasladarlo a ese punto
    this->a+a;
    this->b+a;
    this->c+a;
    this->d+a;
}

float Cuadrado::areaFigura()const
{
    //Calcula el area del cuadrado utilizando triangulacion de polinomios,  creando 2 triangulos y calculando sus respectivas areas
    Triangulo* t1= new Triangulo(this->a,this->b,this->c);
    Triangulo* t2= new Triangulo(this->b,this->c,this->d);
    return (t1->areaFigura() + t2->areaFigura());
}
const Punto & Cuadrado::devolverPunto(int x)const
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
    case 4:
        return this->d;
        break;
    default:
        break;
    }
}
Cuadrado & Cuadrado::operator=(const Cuadrado&Cua)
{
    this->a=Cua.devolverPunto(1);
    this->b=Cua.devolverPunto(2);
    this->c=Cua.devolverPunto(3);
    this->d=Cua.devolverPunto(4);
}
