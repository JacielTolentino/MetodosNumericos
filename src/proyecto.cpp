#include <iostream>
#include <Ecuacion.hpp>
#include <Parametro.hpp>
#include <Principal.hpp>
#include <Solucionador.hpp>

int main ( )
{
 Parametro parametro(1.0, 0.0, 0.5, 0.5);

 Principal programas(parametro, Ecuacion(parametro.ObtenerYInicial()));
 programas.Iniciar();
}