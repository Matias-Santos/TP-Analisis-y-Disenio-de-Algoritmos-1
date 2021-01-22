#ifndef PILA_H
#define PILA_H

template <typename Telem> class Pila
{
    public:
        Pila();
        ~Pila();
        bool eliminatope();
        void agregapila(const Telem & a);
        bool pilavacia()const;
        const topepila()const;
    private:
        struct Nodo{
            Telem elem;
            Nodo*sig;};

        Nodo * primero;

        void eliminapila();
};

#endif
