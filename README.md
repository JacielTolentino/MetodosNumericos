    Metodo de Runge-Kutta
Uno de los métodos más utilizados para resolver numéricamente problemas de ecuaciones diferenciales ordinarias con condiciones iniciales es el método de Runge-Kutta de cuarto orden, el cual proporciona un pequeño margen de error con respecto a la solución real del problema y es fácilmente programable en un software para realizar las iteraciones necesarias.

El método de Runge-Kutta se utiliza para resolver ecuaciones diferenciales de la forma explícita:

![](https://esimecuanalisisnumerico.files.wordpress.com/2014/05/17.png)

O en su forma explícita:

![](https://esimecuanalisisnumerico.files.wordpress.com/2014/05/23.png)

Y es sumamente útil para casos en los que la solución no puede hallarse por los métodos convencionales (como separación de variables). Hay variaciones en el método de Runge-Kutta de cuarto orden pero el más utilizado es el método en el cual se elige un tamaño de paso h y un número máximo de iteraciones n.

El método Runge- Kutta para este problema está dado por la siguiente ecuación:
![](https://esimecuanalisisnumerico.files.wordpress.com/2014/05/32.png)

Para i=0,…, n-1. La solución se da a lo largo del intervalo (xo,xo+hn) , Donde

![](https://esimecuanalisisnumerico.files.wordpress.com/2014/05/43.png)

Así, siguiente valor (yi+1) es determinado por el presente valor (yi) más el producto del tamaño del intervalo (h) por una pendiente estimada. La pendiente un promedio ponderado de pendientes:

k1 es la pendiente al principio del intervalo.
k2 es la pendiente en el punto medio del intervalo, usando k1 para determinar el valor de y en el punto xi + h/2.
k3 es otra vez la pendiente del punto medio, pero ahora usando k2 para determinar el valor de y
k4 es la pendiente al final del intervalo, con el valor de y determinado por k3
Promediando las cuatro pendientes, se le asigna mayor peso a las pendientes en el punto medio:

![](https://esimecuanalisisnumerico.files.wordpress.com/2014/05/52.png)

Edwin Jaciel Tolentino Ortega
22310247

