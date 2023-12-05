#pragma once

#include <iostream>
#include <Ecuacion.hpp>

using namespace std;
class RungeKutta
{

private:
    double x, y, ache, X; 
    Ecuacion problema;
public:
    RungeKutta(double yo, double xo, double h, double xn, const Ecuacion& ecuacion) : y(yo), x(xo), ache(h), X(xn), problema(ecuacion)
    {
    }

    void ResolverEcuacion ( ) {
        int i=0;
        double k1, k2, k3, k4;
        while (x < X) {
        // double k1 = ache * problema.Evaluar(x);
        // double k2 = ache * problema.Evaluar(x + (1/2) * ache);
        // double k3 = ache * problema.Evaluar(x + (1/2) * ache);
        // double k4 = ache * problema.Evaluar(x + ache);
        k1 = problema.Evaluar(x, y);
        k2 = problema.Evaluar(x + ache/2, y + k1 * (ache/2));
        k3 = problema.Evaluar(x + ache/2, y + k2 * (ache/2));
        k4 = problema.Evaluar(x + ache, y + ache * k3);
        x += ache;
        problema.ActualizarSolucion(k1, k2, k3, k4, ache);
        i++;
        }

    std::cout<<"\n\n"<<std::endl;
    std::cout<<"Coeficientes de la iteracion "<<i<<std::endl;
    std::cout<<"K1: "<<k1<<std::endl;
    std::cout<<"K2: "<<k2<<std::endl;
    std::cout<<"K3: "<<k3<<std::endl;
    std::cout<<"K4: "<<k4<<std::endl;
    std::cout<<"\n\n"<<std::endl;
    }

    double ObtenerResultado ( ) const 
    {
     return problema.ObtenerValor ( );
    }
    
    ~RungeKutta ( )
    {
    }
};

