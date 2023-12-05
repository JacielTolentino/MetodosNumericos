#pragma once

#include <iostream>
#include <RungeKutta.hpp>
#include <Parametro.hpp>

class Solucionador
{
private:
    Parametro P;
    RungeKutta RK;
public:
    Solucionador(const Parametro& parametro, const Ecuacion& ecuacion) :
                 P(parametro), RK(P.ObtenerYInicial(), P.ObtenerXInicial(), P.ObtenerSalto(), P.ObtenerXFinal(), ecuacion)
    {
    }

    void ResolverEcuacion ( )
    {
     RK.ResolverEcuacion ();
    }

    double ObtenerResultado ( ) const 
    {
     return RK.ObtenerResultado ();
    }

    ~Solucionador()
    {
        
    }
};

