#include "Circulo.h"
#include <cmath>
#include <Punto.h>


void Circulo::trasladarorigen(float x, float y)
{
    //traslada el centro del origen
    centro.trasladar(x,y);
}

void Circulo::modificarradio(float radio)
{
    //modifica el radio del circulo
    this->radio=radio;
}

const Punto & Circulo::devolverorigen()const
{
    //devuelve el centro del circulo
    return centro;
}

const Circulo::devolverradio()const
{
    //devuelve el radio
    return radio;
}

float Circulo::areaFigura()const
{
    //calcula el area de un circulo
    return 3.14 * (pow( radio,2.0));
}
