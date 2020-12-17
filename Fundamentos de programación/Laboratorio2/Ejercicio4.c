/*Ejercicio 4
Escribir el algoritmo que permita obtener el positivos de una matriz (4x4).
 Además Calcular la suma de los elementos de la diagonal. */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, dim = 0;
	int diagonal = 0;
	printf("-----------------EJERCICIO 4-------------------\n");
	printf("Ingrese la dimension de la matriz: ");
	scanf("%d", &dim);

	int matriz[dim][dim], positivos[dim * 2];

	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++) {
			printf("Ingrese la posicion [%d][%d] >> ", i, j);
            scanf("%d", &matriz[i][j]);
			if (i == j) 
				diagonal = diagonal + matriz[i][j];
		}
	}

	printf("\n Matriz de positivos \n");

    for(i= 0; i < dim; i++){
        for(j = 0; j < dim; j++){
			if (matriz[i][j] > 0)
            	printf("\t %d", matriz[i][j]);
			else 
            	printf("\t *");
        }
        printf("\n");
    }

	printf("\n La suma de la diagonal es: %d", diagonal);

	printf("\n\n");
	system("pause");

	return 0;
}