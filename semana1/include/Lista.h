#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

template <typename elem >
class Lista
{
public:
    Lista ();
    ~Lista ();
    void agregarprincipio (const elem & elemento);
    void agregarfinal (const elem & elemento);
    void agregararbritario (const elem & elemento, unsigned int pos);
    unsigned int cantidadelem () const;
    bool estaelemento (const elem & elemento)const;
    const elem & elementopos (unsigned int pos)const;
    bool esvacia () const;
    void eliminarelem (const elem & elemento);

private:
    struct NodoL
    {
        elem elemento;
        NodoL * sig;
    };
    NodoL * L;
    int largo;
    void vaciar();
};

#endif // LISTAS _H
