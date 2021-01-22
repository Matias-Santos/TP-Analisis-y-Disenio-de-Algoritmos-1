#include "Heapsort.h"

template <typename Telem>
Heapsort<Telem>::Heapsort()
{
    ultpos=0;
}

template <typename Telem>
Heapsort<Telem>::~Heapsort()
{

}
template <typename Telem>
bool Heapsort<Telem>::agregarDat(const Telem&Elem)
{
    arreglo[ultpos]=Elem;
    organizar();
    ultpos++;
    return true;
}
template <typename Telem>
bool Heapsort<Telem>::eliminar()
{
    if (!arrVacio())
    {
        arreglo[0]= arreglo[ultpos];
        arreglo[ultpos]=0;
        ultpos--;
        organizar();
        return true;
    }
    else
        return false;
}
template <typename Telem>
const Telem&Heapsort<Telem>::verPrimero()const
{
    if(!arrVacio())
        return arreglo[0];
}
template <typename Telem>
bool Heapsort<Telem>::arrVacio()const
{
    if (arreglo[0]==0)
        return true;
    else
        return false;
}
template <typename Telem>
void Heapsort<Telem>::ordenaheap(int i)
{
    int mayor=i;
    int izq=2*i;
    int der=2*i+1;
    if ((izq < ultpos) && (arreglo[izq] > arreglo[mayor]))
        mayor=izq;
    if ((der < ultpos) && (arreglo[der] > arreglo[mayor]))
        mayor=der;
    if (mayor!=i)
    {
        Telem aux;
        aux=arreglo[i];
        arreglo[i]=arreglo[mayor];
        arreglo[mayor]=aux;
        ordenaheap(i);
    }
}
template <typename Telem>
void Heapsort<Telem>::organizar()
{
    if (ultpos>1)
        for(int i=ultpos/2-1; i>=0; i--)
            ordenaheap(i);
}

template class Heapsort <int>;
template class Heapsort <float>;
template class Heapsort <double>;
