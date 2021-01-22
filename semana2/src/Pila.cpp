#include "Pila.h"
#include <iostream>

template <typename Telem> Pila<Telem>::Pila(){

    //constructor de la clase
    primero=NULL;
}

template <typename Telem> Pila<Telem>::~Pila(){

    //destructor de la clase
    eliminapila();
    primero=NULL;

}
template<typename Telem> bool Pila<Telem>::eliminatope(){

    //se encarga de eliminar el ultimo elemento insertado si lo hace bien devuelve true

    if(false==pilavacia()){
        Nodo*aux=primero;
        primero=primero->sig;
        delete aux;
        return true;}
    else
        return false;
}

template<typename Telem> void Pila<Telem>::eliminapila(){

    //elimina todos los elementos de la pila
    Nodo*aux=primero;
    while (primero!=NULL){
        primero=primero->sig;
        delete aux;
        aux=primero;}
}

template<typename Telem> void Pila<Telem>::agregapila(const Telem & a){

    //agrega elementos a la pila
    Nodo*aux=new Nodo;
    aux->elem=a;
    aux->sig=primero;
    primero=aux;
}
template<typename Telem> bool Pila<Telem>::pilavacia()const{

    //devuelve un booleano dependiendo si la pila esta vacia o no
    if (primero==NULL)
        return true;
    else
    return false;
}

template <typename Telem> const Pila<Telem>::topepila()const{

    //devuelve el tope de la pila
    if (primero!=NULL)
        return primero->elem;
    else
        return 0;
}

