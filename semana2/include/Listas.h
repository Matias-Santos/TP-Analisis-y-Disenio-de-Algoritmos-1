#ifndef LISTAS_H
#define LISTAS_H
#include <iostream>

using namespace std;

template <typename elem >
class Listas
{
    public:
        Listas();
        ~Listas();
        void agregarprincipio (const elem & elemento);
        void agregarfinal (const elem & elemento);
        void agregararbritario (const elem & elemento, unsigned int pos);
        unsigned int cantidadelem () const;
        bool estaelemento (const elem & elemento)const;
        const elem & elementopos (unsigned int pos)const;
        bool esvacia () const;
        void eliminarelem (const elem & elemento);
    private:
        struct nodo
            {
                elem elemento;
                nodo * sig;
            };
        nodo * L;
        int largo;
        void vaciar();
};

#endif // LISTAS _H
