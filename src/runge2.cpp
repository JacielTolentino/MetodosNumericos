/* ~Incluimos librerias~ */
#include <iostream>
#include <Parametro.hpp>
#include <Ecuacion.hpp>
#include <Principal.hpp>
#include <Solucionador.hpp>
#include <RungeKutta.hpp>

/* ~Se define la ecuacion ordinaria a resolver~ */
double f(double x, double y)
{
    return (y * (x * x)) - 1.2 * x;
}

/* ~Implementacion del metodo Runge-Kutta~ */
double metodo(double xo, double yo, double h, double xn)    {
    double x = xo;
    double y = yo;
    double k1, k2, k3, k4;        
	std::cout<<"I  \tx  \ty  	\ty+n "<<std::endl;
	std::cout<<"----------------------------------------"<<std::endl;
    int i = 0;
	while (x < xn)
    {

        k1 = f(x, y);
        k2 = f(x + h/2, y + k1 * (h/2));
        k3 = f(x + h/2, y + k2 * (h/2));
        k4 = f(x + h, y + h * k3);
        y = y + ((h * (k1 + (2 * k2) + (2 * k3) + k4)) /6);
        x = x + h;


        std::cout<<i<<"\t"<<x<<"\t"<<y<<"\t"<<y<<"\t"<<std::endl;
        i++;       
    }
    std::cout<<"\n\n"<<std::endl;
    std::cout<<"Coeficientes"<<std::endl;
    std::cout<<"K1: "<<k1<<std::endl;
    std::cout<<"K2: "<<k2<<std::endl;
    std::cout<<"K3: "<<k3<<std::endl;
    std::cout<<"K4: "<<k4<<std::endl;
    std::cout<<"\n\n"<<std::endl;

    return y;
}

using namespace std;
int main()
{
/* ~Declaramos variables para la estructura de la solucion y proceso~ */
    float xo, yo, xn, h;
    int i, n;
    
/* ~Ciclo de repeticion~ */
	int cond;
	do {
		system("CLS");
    	cout<<"Ingrese la condicion inicial para x0."<<endl;
    	cout<<"xO: ";
    	cin>>xo;
    	cout<<"Ingrese la condicion inicial para y0."<<endl;
    	cout<<"yO: ";
    	cin>>yo;
    	cout<<"Ingrese el punto xn a calcular.\ny(?)."<<endl;
    	cout<<"xn: ";
    	cin>>xn;
    	cout<<"Ingrese la condicion inicial para h."<<endl;
    	cout<<"h: ";
    	cin>>h;
    	system("pause");
    	system("CLS");

/* ~Se llama el metodo~ */
    double result = metodo(xo, yo, h, xn);

/* ~Se imprime la respuesta~ */
    cout<<"El valor de y cuando x vale "<<xn<<" es "<<result<<endl;
    system("pause");
    system("CLS");
    
    cout<<"Desea realizar una nueva estimacion o terminar el programa."<<endl;
	cout<<"1.-Iniciar el metodo Runge-Kutta."<<endl;
	cout<<"0.-Terminar con el programa."<<endl;
	cin>>cond;
	}while (cond == 1) ;
return 0;
}
