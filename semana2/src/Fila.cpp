#include "Fila.h"
#include <iostream>

template <typename Telem> Fila<Telem>::Fila()
{
    primero=NULL;
    ultimo=NULL;
}

template <typename Telem>
Fila<Telem>::~Fila()
{
    //dtor
}
template <typename Telem>
void Fila<Telem>::agregaElem(Telem a)
{
    if (filaVacia())
    {
        primero=new Nodof;
        primero->Elem=a;
        primero->sig=NULL;
        primero->ant=NULL;
        ultimo=primero;
    }
    else
    {
        Nodof*aux=new Nodof;
        aux->Elem=a;
        aux->sig=primero;
        aux->ant=NULL;
        primero->ant=aux;
        primero=aux;
    }
}
template <typename Telem>
void Fila<Telem>::eliminaPrimero()
{
    if (!filaVacia())
    {
        if (ultimo->ant==NULL)
        {
            delete primero;
            primero=NULL;
            ultimo=NULL;
        }
        else
        {
            ultimo->ant->sig=NULL;
            Nodof*aux=ultimo;
            ultimo=ultimo->ant;
            delete aux;

        }
    }
}
template <typename Telem>
Telem Fila<Telem>::recuperaPrimero()const
{
    if(!filaVacia())
        return ultimo->Elem;
}
template <typename Telem>
bool Fila<Telem>::filaVacia()const
{
    if (primero==NULL)
        return true;
    else
        return false;
}


template class Fila <int>;
template class Fila <float>;
template class Fila <double>;

