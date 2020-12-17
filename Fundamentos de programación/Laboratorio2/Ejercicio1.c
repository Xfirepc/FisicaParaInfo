/*Ejericio1 
Dise�a una funci�n que, dada un conjunto de n�meros de un vector,
devuelva un vector con s�lo aquellos n�meros del primero que son
primos y otro vector con los n�meros divisibles por 2 y por 3 a la vez.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100


void numeros_primos(int[], int);
void numeros_divisibles(int[], int) ;

int main(){
	int i, numeros[MAX];
	printf("-----------------EJERCICIO 1-------------------\n");
	printf("Rellene el vector de numeros enteros y escriba 0 para dejar de ingresar.\n");

	for (i = 0; i < MAX; i++) {
		printf("\nIngrese la posicion [%d]: ", i + 1);
		scanf("%d", &numeros[i]);
		if (numeros[i] == 0) break;
	}

	printf("\n Numeros primos: ");
	numeros_primos(numeros, i);
	printf("\n Numeros divisibles para 2 y 3: ");
	numeros_divisibles(numeros, i);

	printf("\n\n");
	system("pause");

	return 0;
}


