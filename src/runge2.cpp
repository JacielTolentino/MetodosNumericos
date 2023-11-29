/* ~Incluimos librerias~ */
#include <iostream>

/* ~Se define la ecuacion ordinaria a resolver~ */
double f(double x, double y)
{
    return (y * (x * x)) - 1.2 * x;
}

/* ~Implementacion del metodo Runge-Kutta~ */
double metodo(double xo, double yo, double h, double xn)
{
    double x = xo;
    double y = yo;
    double k1, k2, k3, k4;
    while (x < xn)
    {
        k1 = h * f(x, y);
        k2 = h * f(x + h / 2, y + k1 / 2);
        k3 = h * f(x + h / 2, y + k2 / 2);
        k4 = h * f(x + h, y + k3);
        y = y + ((k1 + (2 * k2) + (2 * k3) + k4) / 6);
        x = x + h;
    }

    return y;
}

using namespace std;
int main()
{
    /* ~Declaramos variables para la estructura de la solucion y proceso~ */
    float xo, yo, xn, h;
    int i, n;

    cout << "Ingrese la condicion inicial para x0." << endl;
    cout << "xO: ";
    cin >> xo;
    cout << "Ingrese la condicion inicial para y0." << endl;
    cout << "yO: ";
    cin >> yo;
    cout << "Ingrese el punto xn a calcular.\ny(?)." << endl;
    cout << "xn: ";
    cin >> xn;
    cout << "Ingrese la condicion inicial para h." << endl;
    cout << "h: ";
    cin >> h;

    /* ~Se llama el metodo~ */
    double result = metodo(xo, yo, h, xn);

    /* ~Se imprime la respuesta~ */
    cout << "El valor de y cuando x vale " << xn << " es " << result << endl;
    return 0;
}
