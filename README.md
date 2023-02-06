# Archivo 1

## Introducción
Este programa permite calcular el costo total de un crédito, incluyendo intereses, seguro de vida (opcional) y gastos operacionales.

## Funciones

### `calcular_interes_simple(int, float, int)`
Calcula el valor del interés simple que se debe pagar por un crédito. Recibe los siguientes parámetros:

- `monto_credito`: Monto del crédito solicitado.
- `tasa_interes_fija`: Tasa de interés fija.
- `cuotas`: Cantidad de cuotas para pagar el crédito.

La función retorna el valor del interés simple.

### `valor_seguro_vida(bool, int, int)`
Calcula el valor del seguro de vida. Recibe los siguientes parámetros:

- `seguro_vida`: Booleano que indica si se desea o no contratar un seguro de vida.
- `edad`: Edad de la persona que solicita el crédito.
- `monto_credito`: Monto del crédito solicitado.

La función retorna el valor del seguro de vida.

## Flujo del código
1. Se inicializan las variables necesarias.
2. Se solicita al usuario que ingrese los siguientes datos:
  - Monto del crédito solicitado.
  - Cantidad de cuotas para pagar el crédito.
  - Si desea o no un seguro de vida.
  - Su edad.
3. Se llaman a las funciones `calcular_interes_simple` y `valor_seguro_vida` con los parámetros ingresados por el usuario.
4. Se calculan el valor de los intereses mensuales, los gastos operacionales y el total a pagar.
5. Se muestran los resultados obtenidos en pantalla.

## Consideraciones
- El valor de la UF utilizado es el valor del día 12/11/2021 13:20 PM.
- La tasa de interés fija utilizada es del 4%.
- El gasto operacional es del 0.5% del monto del crédito.
- El valor del seguro de vida es de 3 UF.

# Archivo 2
## Introducción
Este código en C++ tiene como objetivo cargar dos matrices, `matriz_a` y `matriz_b`, con números impares e pares, respectivamente. Las matrices se llenan a través de la función `cargar_impares()` y `cargar_pares()`. Además, se utiliza una función `es_par_impar()` para determinar si un número es par o impar. Finalmente, se muestran las dos matrices en pantalla.

## Funciones
- `cargar_impares()`: Esta función es encargada de cargar los números impares en la matriz `matriz_a`. Utiliza la función `es_par_impar()` para determinar si un número es impar y, si lo es, se agrega a la matriz.
- `cargar_pares()`: Esta función es encargada de cargar los números pares en la matriz `matriz_b`. Utiliza la función `es_par_impar()` para determinar si un número es par y, si lo es, se agrega a la matriz.
- `es_par_impar()`: Esta función recibe un número como parámetro y determina si es par o impar. Retorna `true` si el número es par y `false` en caso contrario.

## Flujo del código
1. En la función `main()` se invocan las funciones `cargar_impares()` y `cargar_pares()`.
2. La función `cargar_impares()` recorre las filas y columnas de la matriz `matriz_a` y, en cada iteración, se invoca la función `es_par_impar()`. Si `es_par_impar()` retorna `false`, se agrega el número ingresado por el usuario a la matriz `matriz_a`.
3. La función `cargar_pares()` funciona de manera similar a `cargar_impares()`, pero en este caso se llena la matriz `matriz_b` con números pares.
4. Luego de cargar ambas matrices, se muestran en pantalla.

## Consideraciones
- Las matrices `matriz_a` y `matriz_b` tienen un tamaño fijo de 10 filas y 15 columnas y 8 filas y 14 columnas, respectivamente.
- La función `es_par_impar()` solo verifica si el número es par o impar hasta el número 999, por lo que se debe tener en cuenta este límite.
- En la función `main()` se muestran las matrices `matriz_a` y `matriz_

