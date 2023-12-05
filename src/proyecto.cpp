#include <iostream>

#include <Principal.hpp>

using namespace std;
int main ( )
{
    int i;
    cout<<"Edwin Jaciel Tolentino Ortega.\n22310247.\n"<<endl;
    cout<<"Programacion"<<endl;
    system("pause");
    system("clear");

    do {

    double xo, yo, h, xn;
    cout<<"Ingrese el valor inicial para Y0"<<endl;
    cin>>yo;
    cout<<"Ingrese el valor inicial para X0"<<endl;
    cin>>xo;
    cout<<"Ingrese el valor de h"<<endl;
    cin>>h;
    cout<<"Ingrese el valor final para x"<<endl;
    cin>>xn;

    Parametro parametro(yo, xo, h, xn);
    Principal programas(parametro, Ecuacion(parametro.ObtenerYInicial()));
    programas.Iniciar();
    system("pause");
    system("clear");

    cout<<"Desea repetir el codigo? \n1.-Si \n0.-No"<<endl;
    cin>>i;
    system("pause");
    system("clear");
    
    }while (i != 0);
    

}