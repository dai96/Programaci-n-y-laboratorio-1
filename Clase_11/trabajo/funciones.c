#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<strings.h>
#include<string.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"

int getInt (char mensaje [])
{
    int retorno;
    printf("Ingrese %s:",mensaje);
    scanf("%d", &retorno);

    return retorno;
}

float getFloat (char mensaje [])
{
    float retorno;
    printf("Ingrese %s:",mensaje);
    scanf("%f",&retorno);

    return retorno;
}

char getCaracter (char mensaje [])
{
    char retorno;
    printf("Ingrese %s:",mensaje);
    fflush(stdin);
    scanf("%c",&retorno);

    return retorno;
}

void getString(char mensaje [],char vec[])
{
    char retorno [200];
    printf("Ingrese %s:",mensaje);
    fflush(stdin);
    gets(retorno);
    strcpy(vec,retorno);
}

void getNombres (char mensaje [], char vec [])
{
    char retorno [20];
    printf("Ingrese %s:",mensaje);
    fflush(stdin);
    gets(retorno);
    strlwr(retorno);
    retorno[0]=toupper(retorno[0]);
    upperSegundoNombre(retorno);
    strcpy(vec,retorno);
}

void upperSegundoNombre (char vec [])
{
    int i;
    for (i=0;vec[i]!='\0';i++)
    {
        if (vec[i]==' ')
        {
            i++;
            vec[i]=toupper(vec[i]);
            i--;
        }
    }

}

int esNumerico(char vec[])
{
   int i=0;
   while(vec[i] != '\0')
   {
       if(vec[i] < '0' || vec[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

void validarString (char validar [], int tam, char solicita[])
{
    while (strlen(validar)>tam)
    {
        printf("Error! reingrese %s:",solicita);
        fflush(stdin);
        gets(validar);
    }
}
