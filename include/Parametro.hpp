#pragma once

#include <iostream>

class Parametro
{
private:
    double yo, xo, h, xn;

public:
    Parametro(double yinicio, double xinicio, double H, double xfinal) : yo(yinicio), xo(xinicio), h(H), xn(xfinal)
    {
    }

    double ObtenerYInicial() const
    {
        return yo;
    }

    double ObtenerXInicial() const
    {
        return xo;
    }

    double ObtenerSalto() const
    {
        return h;
    }

    double ObtenerXFinal() const
    {
        return xn;
    }

    ~Parametro()
    {
    }
};
