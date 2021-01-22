#ifndef ADMINFIG_H
#define ADMINFIG_H
#include "Figura2d.h"
#include "Lista.h"

class AdminFig
{
public:
    AdminFig();
    ~AdminFig();
    unsigned int devuelvetam () const;
    bool agregarFig(Figura2d*fig);
    bool eliminarFig(Figura2d*fig);
    Figura2d* obtenerFig(unsigned int pos);
    double procesar() const;
private:
    Lista <Figura2d *> ladmin;
};

#endif // ADMINFIG_H

