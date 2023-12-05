# **Metodo de Runge-Kutta**
**Proyecto de programación avanzada.**  

![](https://seeklogo.com/images/C/ceti-logo-B1B0689A50-seeklogo.com.png)

#### Edwin Jaciel Tolentino Ortega.
#### -22310247-

### 3er Parcial

## Metodo numerico para ecuaciones diferenciales ordinarias
Uno de los métodos más utilizados para resolver numéricamente problemas de ecuaciones diferenciales ordinarias con condiciones inisx|ciales es el método de Runge-Kutta de cuarto orden, el cual proporciona un pequeño margen de error con respecto a la solución real del problema y es fácilmente programable en un software para realizar las iteraciones necesarias.
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

## **Requerimientos base**
Se necesita tener instalado tanto Msys2 como el entorno Mingw-w64 previamente a iniciar el proyecto, el proceso de instalacion es el siguiente.

1. Instalar MSYS2 descargando el instalador desde el sitio oifcial.
 >[!NOTE]
 Se debe cerciorar de instalar la version correcta del programa **MSYS2 MINGW64**
2. Abrir la terminal e ingresar el siguiente codigo

 `$ pacman -S mingw-w64-x86_64-SDL2`

3. Aceptamos las descargas e ingresamos el siguiente codigo

`$ pacman -S mingw-w64-x86_64-gcc`

#### Una vez hecho esto sera posible ejecutar los archivos utilizando `g++` o `c++` en la terminal del compilador.
## Requerimientos en el entorno
Para la correcta funcion del programa se debe tener instalados los siguientes complementos
- C++ y sus complementos
- Material Icon Themes
- PlantUML
- CMake
- Markdown Alert
- Makefile Tool




## **Funcionamiento**

El codigo implementa 5 clases `Ecuacion, Parametro, Principal, RungeKutta y Solucionador`, un archivo cpp de nombre `proyecto.cpp` y un archivo `Makefile`.

> [!NOTE]
El programa se ejecuta en terminal y se puede compilar usando el codigo `make run `

>[!TIP]
Limpiar la terminal antes del uso para una mejor visualizacion del resultado

>[!WARNING]
En caso de ingresar un caracter que no sea numerico a la hora de ingresar los valores iniciales utilizar `ctrl+c` y reiniciar el codigo

1. Primero el programa mostrara el nombre del autor del codigo asi como la materia y el registro del alumno
![](/assets/images/Captura%20de%20pantalla%202023-12-04%20175349.png)

2. Despues se debera ingresar los valores iniciales requeridos para las variables y0, x0, h y xn `En ese respectivo orden`
>[!NOTE]
En este caso la ecuacion a trabajar es `(y*x^2) - 1.2*x`, en caso de querer cambiar la ecuacion a resolver se puede cambiar desde la función `Ecuacion.hpp`.
![](/assets/images/Captura%20de%20pantalla%202023-12-04%20175416.png)

3. El programa mostrara el resultado y los coeficientes finales para la obtencion del mismo, asimismo, mostrara el numero de iteraciones totales.
![](/assets/images/Captura%20de%20pantalla%202023-12-04%20181440.png)

4. El programa mostrara un pequeño menú el cual servira para poder reiniciar el programa desde el punto en que se ingresan los parametros o en caso contrario cerrar el programa.
![](/assets/images/Captura%20de%20pantalla%202023-12-04%20175427.png)

