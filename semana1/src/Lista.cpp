#include "Lista.h"
#include "Figura2d.h"
#include <iostream>
#include "Punto.h"
#include "Segmento.h"

using namespace std;

template <typename elem> Lista<elem> ::Lista ()
{
    //Constructor de la clase
    L = NULL;
    largo = 0;
}

template <typename elem> Lista<elem> ::~ Lista()
{
    //destructor de la clase
    vaciar();
    L=NULL;
}

template <typename elem> void Lista<elem> :: agregarprincipio(const elem & elemento)
{
    //agregar al principio de la lista
    NodoL * aux = new NodoL;
    aux->elemento = elemento;
    aux->sig=L;
    L=aux;
    largo++;
}

template <typename elem> void Lista<elem>::agregarfinal (const elem & elemento)
{

    //agrega al final de la lista
    if (L=NULL)
    {
        agregarprincipio(elemento);
    }
    else
    {
        NodoL * aux=L;
        int i=0;
        while (i<largo)
        {
            i++;
            aux=aux->sig;
        }
        NodoL * aux1= new NodoL;
        aux1->elemento=elemento;
        aux1->sig=NULL;
        aux->sig=aux1;
        largo++;
    }
}

template <typename elem> void Lista<elem>::agregararbritario (const elem & elemento, unsigned int pos)
{

    //agrega en una posicion ingressada por el usuario
    if (pos==1)
    {
        agregarprincipio(elemento);
    }
    else if (pos>= largo+1)
    {
        agregarfinal(elemento);
    }
    else
    {
        NodoL * aux=L;
        int i=0;
        while (i<pos-1)
        {
            i++;
            aux=aux->sig;
        }
        NodoL * insertar= new NodoL;
        insertar->elemento=elemento;
        insertar->sig=aux->sig;
        aux->sig=insertar;
        largo++;
    }
}

template <typename elem> unsigned int Lista<elem>::cantidadelem () const
{

    //devuelve la cantidad de nodos de la lista
    return largo;
}

template <typename elem> bool Lista<elem>::estaelemento (const elem & elemento)const
{
    //devuelve si se encuentra un elemento de la lista preguntado por el usuario
    int i=0;
    NodoL * aux= L;
    while (i < largo)
    {
        if (aux->elemento == elemento)
            return true;
        else
        {
            i++;
            aux=aux->sig;
        }
    }
    return false;
}

template <typename elem> const elem & Lista<elem>::elementopos (unsigned int pos)const
{
    //devuelve true si esta el elemento en la lista en caso de no estar false
    int i=0;
    NodoL * aux=L;
    while ((i<largo)&&(i<pos))
    {
        i++;
        aux=aux->sig;
    }
    if ((i==pos)&&(i<largo))
        return aux->elemento;
}

template <typename elem> bool Lista<elem>::esvacia () const
{

    //devuelve true si no hay elementos en la lista sino un false
    if (largo==0)
        return true;
    else
        return false;
}

template <typename elem> void Lista<elem>::eliminarelem (const elem & elemento)
{

    //elimina un elemento que es ingresado por el usuario
    int i=0;
    if (!esvacia())
    {
        NodoL * aux =L;
        while (i < largo)
        {
            if ((aux->sig != NULL) && (aux->sig->elemento == elemento))
            {
                NodoL * AEliminar=aux->sig;
                aux->sig=aux->sig->sig;
                delete AEliminar;
                AEliminar=NULL;
                i++;
                largo--;
            }
            else
            {
                i++;
                aux=aux->sig;
            }
        }
    }
}

template <typename elem> void Lista<elem>::vaciar()
{

    //elimina toda la lista
    NodoL * AEliminar=NULL;
    while (!esvacia())
    {
        AEliminar=L;
        L=L->sig;
        delete AEliminar;
    }
}

template class Lista <Segmento>;
template class Lista <Punto>;
template class Lista <int>;
template class Lista <float>;
template class Lista <double>;
template class Lista <Figura2d*>;
