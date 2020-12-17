/* Ejercicio 2
Diseñar una función que informe si una cadena es un palíndromo (una
cadena es un palíndromo si se lee igual de izquierda a derecha que de
derecha a izquierda). Ejemplo: radar*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

int isPalindrome(char*, size_t);

int main() {
    char cadena[MAX];

    printf("-----------------EJERCICIO 2-------------------\n");
    printf("Ingrese la cadena a verificar: ");
    scanf(" %199[^\n]%*[^\n]%*c", cadena);

    printf("\n");
    isPalindrome(cadena, strlen(cadena));

    printf("\n\n");
    system("pause");
    return 0;
}

int isPalindrome(char* buf, size_t len) {
    size_t i = 0;
    size_t j = len;
    char a;
    char b;

    while (j > i) {
        a = tolower(buf[i++]);
        b = tolower(buf[--j]);

        if (a != b) {
            printf("La palabra NO es palindroma");
            return -1;
        }
    }

    printf("La palabra SI es palindroma!");
    return 0;
}