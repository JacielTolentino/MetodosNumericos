#pragma once

#include <iostream>
#include <Ecuacion.hpp>
#include <Solucionador.hpp>

using namespace std;
class RungeKutta
{

private:
    double x, y, ache, X; 
    Ecuacion problema;
public:
    RungeKutta(double xo, double yo, double h, double xn, const Ecuacion& ecuacion) : x(xo), y(yo), ache(h), X(xn), problema(ecuacion)
    {
    }

    void ResolverEcuacion ( ) {
        while (x < X) {
            double k1 = ache * problema.Evaluar(x);
            double k2 = ache * problema.Evaluar(x + 0.5 * ache);
            double k3 = ache * problema.Evaluar(x + 0.5 * ache);
            double k4 = ache * problema.Evaluar(x + ache);
            problema.ActualizarSolucion(ache, k1, k2, k3, k4);
            x += ache;
        }

    }
    double ObtenerResultado ( ) const 
    {
     return problema.ObtenerValor ( );
    }
    
    ~RungeKutta ( )
    {
    }
};

