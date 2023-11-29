#include <iostream>
/* ~Se define la ecuacion ordinaria a resolver~ */ 
#define f(x,y) (y*y-x*x)/(y*y+x*x)

using namespace std;
int main ( ) {
/* ~Declaramos variables para la estructura de la solucion y proceso~ */
    float xo, yo, xn, yn, h;
    float k, k1, k2, k3, k4;
    int i, n;

    cout<<"Ingrese la condicion inicial para x0."<<endl;
    cout<<"xO: ";
    cin>>xo;
    cout<<"Ingrese la condicion inicial para y0."<<endl;
    cout<<"yO: ";
    cin>>yo;
    cout<<"Ingrese el punto xn a calcular."<<endl;
    cout<<"xn: ";
    cin>>xn;
    cout<<"Ingrese el numero de iteraciones."<<endl;
    cin>>n;

/* ~Calculamos h~ */
    h = (xn - xo)/n;

/* ~Metodo de Runge-Kutta~ */
    cout<<"| nx0 | ty0 |tyn | n |"<<endl;
    cout<<"--------------------------------------"<<endl;
    for (i = 0; i <= n; i++)
        {
         k1 = h * (f(xo, yo));
         k2 = h * (f((xo + h/2), (yo + k1/2)));
         k3 = h * (f((xo + h/2), (yo + k2/2)));
         k4 = h * (f((xo + h), (yo + k3)));
         k = (k1 + 2*k2 + 2*k3 + k4)/6;
         yn = yo + k;

         cout<<xo<<" | "<<yo<<" | "<<yn<<" |"<<endl;
         xo = xo + h;
         yo = yn;
        }

/* ~Impresion de los resultados obtenidos~ */
    cout<<"El valor de Y para "<<xn<<" es "<<yn<<endl;
    cout<<"["<<xn<<", "<<yn<<"]"<<endl;

    return 0;
}