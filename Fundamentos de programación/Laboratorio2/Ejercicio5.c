/*Ejercicio 5
Diseña un programa que lea una matriz y muestre su traspuesta. La
traspuesta de una matrizA de dimensión m x n es una matriz AT
dimensión n x m*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\t Transpuesta de una matriz");
    printf("-----------------EJERCICIO 6-------------------\n");

    int cols, rows, i ,j;
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &rows);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &cols);

    int matriz[rows][cols];

    for(i= 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Ingrese la posicion [%d][%d] >> ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz normal \n");
    for(i= 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("\t %d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transpuesta \n");
    for(i= 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            printf("\t %d", matriz[j][i]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}	