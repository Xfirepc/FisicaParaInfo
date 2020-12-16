/*Ejercicio 5
Escribir un algoritmo para determinar si una subcadena especificada 
ocurre en una cadena dada, y si es así, escribir un asterisco (*) 
en la primera posición de cada ocurrencia.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

int main() {
    printf("-----------------EJERCICIO 3-------------------\n");
    char cadena[MAX], subcadena[MAX];
    int i, j, subcadlen, aux, contains = 0, cont = 0;

    printf("Ingrese la cadena principal: ");
    scanf(" %199[^\n]%*[^\n]%*c", cadena);

    printf("Ingrese la subcadena: ");
    scanf(" %199[^\n]%*[^\n]%*c", subcadena);
    printf("\n\n");

    subcadlen = strlen(subcadena);

    for(i = 0; i < strlen(cadena); i++) {
        aux = i;
        for(j = 0; j < subcadlen; j++) {
            if (cadena[aux] == subcadena[j]) {
                aux++; cont++;
                if (cont == subcadlen)
                    contains = 1;
            } else break;
        }
        if (contains == 1) {
            printf("*");
        } else {
            printf("%c", cadena[i]);
        }
       contains = 0;
       cont = 0;
    }


    printf("\n\n");
    system("pause");
    return 0;
}	