#ifndef FIGURA2D_H
#define FIGURA2D_H
#include <iostream>

class Figura2d
{
public:
    Figura2d(std::string tipo)
    {
        this->tipo = tipo;
    };
    ~Figura2d() {};
    std::string obtenertipo() const;
    virtual float areaFigura()const
    {
        return 0;
    };
private:
    std::string tipo;
};

#endif // FIGURA2D_H

