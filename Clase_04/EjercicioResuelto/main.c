/******************************************************************
* Programa: Ejemplo Clase 4
*
* Objetivo:
*   A-  Desarrollar una biblioteca "utn.h" que posea funciones para
*       pedirle al usuario el ingreso de datos
*           - getInt()
*           - getFloat()
*           - getChar()
*
*   B-  Dise�ar un programa para jugar a adivinar un n�mero entre 0 y 100.
*       El juego tiene que dar pistas de si el n�mero introducido por el
*       jugador est� por encima o por debajo. El juego termina cuando se
*       adivina el n�mero o se decide terminar de jugar ingresando un n�mero
*       negativo. Permitir jugar tantas veces como lo desee el jugador y al
*       salir mostrar su mejor puntuaci�n. Utilizar la biblioteca del punto 1.
*
* Aspectos a destacar:
*   -Se practica la declaraci�n de funciones y se muestra como crear una
*    biblioteca propia y utilizarla en un programa.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio D�vila
* Revisi�n: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int num;
int continuar='s';


main()
{
    printf("--------------------Bienvenido al adivinador de tu numero!!!----------------------");
    getchar();
    system("cls");

  do
    {
        getInt("Ingrese un numero positivo para jugar o un numero negativo para terminar: ")






    }
    while (num<0);



}
