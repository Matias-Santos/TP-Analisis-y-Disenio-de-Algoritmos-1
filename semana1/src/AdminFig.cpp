#include "AdminFig.h"
#include "Figura2d.h"
#include "Lista.h"
#include <iostream>

AdminFig::AdminFig()
{

}

AdminFig::~AdminFig()
{

}

unsigned int AdminFig::devuelvetam()const
{
    return ladmin.cantidadelem();
}

bool AdminFig::agregarFig(Figura2d*fig)
{
    //Agrega la figura al principio de la lista
    ladmin.agregarprincipio(fig);
    return true;
}

bool AdminFig::eliminarFig(Figura2d*fig)
{
    //Si la figura buscada esta en la lista, es eliminada
    if(ladmin.estaelemento(fig))
    {
        ladmin.eliminarelem(fig);
        return true;
    }
    else
        return false;
}

Figura2d* AdminFig::obtenerFig(unsigned int pos)
{
    //Devuelve la figura que se encuentra en la posicion deseada, si la lista no es lo suficientemente larga, devuelve false
    return ladmin.elementopos(pos);
}
