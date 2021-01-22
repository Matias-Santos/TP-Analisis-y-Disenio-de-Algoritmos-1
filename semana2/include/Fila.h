#ifndef FILA_H
#define FILA_H


template <typename Telem> class Fila
{
public:
    Fila();
    virtual ~Fila();
    void agregaElem(Telem a);
    void eliminaPrimero();
    Telem recuperaPrimero()const ;
    bool filaVacia()const ;
private:
    struct Nodof
    {
        Telem Elem;
        Nodof*sig;
        Nodof*ant;
    };
    Nodof*primero;
    Nodof*ultimo;
};

#endif // FILA_H
