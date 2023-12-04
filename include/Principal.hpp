#pragma once

#include <iostream>
#include <Solucionador.hpp>
#include <Ecuacion.hpp>

using namespace std;
class Principal
{
private:
    Solucionador solucion;

    void ImprimirResultado ( ) const 
    {
     cout<<"Valor aproximado de y("<<solucion.ObtenerResultado()<<")"<<" es "<<solucion.ObtenerResultado()<<endl;
    }

public:
    Principal(const Parametro& parametro, const Ecuacion& ecuacion) : solucion(parametro, ecuacion)
    {   }

    void Iniciar ( )
    {
     solucion.ResolverEcuacion();
     ImprimirResultado();
    }
    ~Principal()
    {  }
};
