#ifndef HEAPSORT_H
#define HEAPSORT_H


template <typename Telem> class Heapsort
{
    public:
        Heapsort();
        virtual ~Heapsort();
        bool agregarDat(const Telem&Elem);
        bool eliminar();
        const Telem&verPrimero()const;
        bool arrVacio()const;
    private:
        void organizar();
        void ordenaheap(int i);
        Telem arreglo[20000]={};
        int ultpos;
};

#endif // HEAPSORT_H
