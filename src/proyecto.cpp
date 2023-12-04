#include <iostream>
#include "Parametro.hpp"
#include "Ecuacion.hpp"
#include "Principal.hpp"

int main ( )
{
 Parametro parametro(1.0, 0.0, 0.5, 0.5);

 Principal programas(parametro, Ecuacion(parametro.ObtenerYInicial()));
 programas.Iniciar();
}