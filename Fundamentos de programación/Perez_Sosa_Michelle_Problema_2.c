/* Implementar un programa que imprima todos los n�meros que hay
entre dos n�meros introducidos por el usuario comenzando por el
menor y su suma.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int max = 0, min = 0, i = 0;
    int a, b;

    printf("\n Ingresar el limite 1 >>");
    scanf("%d", &a);
    printf("\n Ingresar el limite 2 >>");
    scanf("%d", &b);

        
    if (a > b) {
        max = a; 
        min = b;
    } else {
        max= b; 
        min = a;
    }
    
    printf("\n Los numeros comprendidos entre [%d:%d] son: \n", max, min);
    for(i = min; i<= max; i++){
        printf("%d \t", i);
    }
    printf("\nAutor:Michelle Pérez Sosa Grupo 13");
    return 0;
}
