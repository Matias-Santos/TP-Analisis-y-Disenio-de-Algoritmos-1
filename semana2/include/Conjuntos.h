#ifndef CONJUNTOS_H
#define CONJUNTOS_H

template <typename elem> class Conjuntos
{
    public:
        Conjuntos();
        ~Conjuntos();
        bool agregardato(const elem & dato);
        bool pertenece(const elem & dato)const;
        bool esvacio() const ;
        unsigned int tamanio()const;
        const devuelvevalor(const int pos)const;
        bool eliminar (const elem & dato);
        void unionconjunto (const Conjuntos & otroconjunto);
        void interseccion (const Conjuntos & otroconjunto);
        void mueveactual();
        bool finactual();
        void resetactual();
        const elem devuelveactual();
    private:
        struct NodoC
        {
            elem elemento;
            NodoC*sig;
        };
        NodoC*conj;
        NodoC*actual;
        int largo;
        void vaciar();
        void agregar(NodoC *&punt,NodoC *& aux);
};


#endif // CONJUNTOS_H
