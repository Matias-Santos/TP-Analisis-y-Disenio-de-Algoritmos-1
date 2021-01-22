#include "Conjuntos.h"
#include <iostream>

template <typename elem> Conjuntos<elem>::Conjuntos()
{
    //Constructor de la clase
    conj=NULL;
    actual=NULL;
    largo=0;
}
template <typename elem> Conjuntos<elem>::~Conjuntos()
{
    //Destructor de la clase
    vaciar();
    largo=0;
}
template <typename elem> bool Conjuntos<elem>::pertenece(const elem & elemento)const
{
    //Devuelve true en caso de que el elemento este en caso contrario false
    NodoC * cursor = conj;
    while ((cursor!=NULL)&&(cursor->elemento!=elemento))
        cursor=cursor->sig;
    if ((cursor!=NULL)&&(cursor->elemento==elemento))
        return true;
    else
        return false;
}

template <typename elem> void Conjuntos<elem>::agregar(NodoC *& punt,NodoC *& aux)
{

    if ((punt==NULL) || (punt->elemento > aux->elemento))
    {
        aux->sig=punt;
        punt=aux;
        largo++;
    }
    else
    {
        agregar(punt->sig,aux);
    }

}
template <typename elem> bool Conjuntos<elem>::agregardato(const elem & dato)
{
    //Agrega un elemento ordenado en el conjunto
    NodoC*aux= new NodoC;
    aux->elemento=dato;
    aux->sig=NULL;
    NodoC*punt=conj;
    agregar(punt,aux);
    conj=punt;
}

template <typename elem> bool Conjuntos<elem>::esvacio()const
{
    //Devuelve true en caso de que el conjunto sea vacio sino un false
    if (largo==0)
        return true;
    else
        return false;
}
template <typename elem> bool Conjuntos<elem>::eliminar(const elem&elemento)
{
    //elimina un elemento que es ingresado por el usuario
    int i=0;
    if (!esvacio())
    {

        if (conj->elemento == elemento)
        {
            NodoC * aux =conj;
            conj=conj->sig;
            delete aux;
        }
        else
        {
            NodoC*aux=conj;
            while (i < largo)
            {
                if ((aux->sig != NULL) && (aux->sig->elemento == elemento))
                {
                    NodoC * AEliminar=aux->sig;
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
}
template <typename elem> void Conjuntos<elem>::unionconjunto(const Conjuntos &otroconjunto)
{
    //Agrega los elementos de otroconjunto que no estan en el original
    NodoC*aux = otroconjunto.conj;
    while(aux!=NULL)
        agregardato(aux->elemento);
}
template <typename elem> void Conjuntos<elem>::interseccion(const Conjuntos &otroconjunto)
{
    //Agrega los elementos del 2do conjunto al primero, y borra los que estan en los 2
    NodoC*aux=otroconjunto.conj;
    while (aux!=NULL)
    {
        if(!pertenece(aux->elemento))
        {
            eliminar(aux->elemento);
            aux=aux->sig;
        }
    }
}
template <typename elem> unsigned int Conjuntos<elem>::tamanio()const
{
    //Devuelve el cardinal del conjunto
    return largo;
}
template <typename elem> void Conjuntos<elem>::vaciar()
{

    //elimina toda la lista
    NodoC * AEliminar=NULL;
    while (!esvacio())
    {
        AEliminar=conj;
        conj=conj->sig;
        delete AEliminar;
    }
}
template <typename elem> const Conjuntos<elem>::devuelvevalor(const int pos)const
{
    int i=0;
    NodoC*aux=conj;
    while ((i<largo)&&(i<pos))
    {
        i++;
        aux=aux->sig;
    }
    if ((i==pos)&&(i<largo))
        return aux->elemento;
    else
        return false;
}

template <typename elem> void Conjuntos<elem>::resetactual()
{
    actual=conj;
}
template <typename elem> bool Conjuntos<elem>::finactual()
{
    return (actual!=NULL);
}
template <typename elem> const elem Conjuntos<elem>::devuelveactual()
{
    int aux=actual->elemento;
    actual=actual->sig;
    return aux;
}

template class Conjuntos <int>;
template class Conjuntos <float>;
template class Conjuntos <double>;
