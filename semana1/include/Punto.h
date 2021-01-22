#ifndef PUNTO_H
#define PUNTO_H
#include <cmath>


class Punto
{
public:
    Punto() {};
    Punto(const float&x, const float&y)
    {
        {
            //constructor de la clase
            this->x=x;
            this->y=y;
        }
    };
    ~Punto() {};
    float coordx () const;
    float coordy () const;
    float distancia (const Punto&otropunto)const;
    void trasladar (float x, float y);
    bool operator== (const Punto&otropunto)const;
    bool operator!= (const Punto&otropunto)const;
    void operator+ (const Punto&otropunto);
    Punto operator= (const Punto&otropunto);
private:
    float x;
    float y;
};

#endif // PUNTO_H
