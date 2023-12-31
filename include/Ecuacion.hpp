#pragma once

#include <iostream>
#include <Parametro.hpp>

using namespace std;
class Ecuacion
{
 private:
    double y;

 public:
    Ecuacion(double Parametro) : y(Parametro)
    {   }

    double Evaluar(double x, double y) const
    {
     return (y * (x * x)) - 1.2 * x;
    }

    void ActualizarSolucion (double k1, double k2, double k3, double k4, double h)
    {
     y = y + h/6 * (k1 + (2*k2) + (2*k3) + k4); 
    }

    double ObtenerValor( ) const 
    {
     return y;
    }

    ~Ecuacion()
    {   }
};

