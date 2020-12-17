
/*Ejercicio 7
Finalmente implementar un algoritmo que generar un menú con 6
opciones. La elección de cada opción del menú ejecuta cada ejercicio
anterior 1,2,3,4,5,6 con funciones */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


// Menu principal del programa 6
int menuProgramas() {
	int op;
	printf("\n*** Menu de opciones ***");
	printf("\n 1. Ejercicio 1: Numeros divisibles y primos de un vector");
	printf("\n 2. Ejercicio 2: Programa de palabra palindromo");
	printf("\n 3. Ejercicio 3: Subcadena en una cadena nueva");
	printf("\n 3. Ejercicio 4: Positivos y diagonal de una matriz 4x4");
	printf("\n 3. Ejercicio 5: Transpuesta de una matriz nxm");
	printf("\n 3. Ejercicio 6: Simular un cajero para descglosar billetes.");
	printf("\n 0. Salir");
	printf("\n Escojer opcion >> ");

	scanf("%d", &op);
    flush_in();
	return op;
}

void numeros_primos(int vector[], int n) 
{
	int i, j, cont = 0;
	for (i = 0; i < n; i++) {
		for (j = 1; j <= vector[i]; j++) {
			if (vector[i] % j == 0) cont++;
		}
		if (cont == 2) {
			printf("%d \t", vector[i]);
		}
		cont = 0;
	}
}

void numeros_divisibles(int vector[], int n) 
{
	int i;
	for (i = 0; i < n; i++) {
		if (vector[i] % 2 == 0 && vector[i] % 3 == 0) {
			printf("%d \t", vector[i]);
		}
	}
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


int ejercicio1 () {
	int i, numeros[100];
	printf("-----------------EJERCICIO 1-------------------\n");
	printf("Rellene el vector de numeros enteros y escriba 0 para dejar de ingresar.\n");

	for (i = 0; i < 100; i++) {
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
}

void ejercicio2() {

}

void ejercicio3() {

}

void ejercicio4() {

}

void ejercicio5() {

}

void ejercicio6() {

}


int main() {
    int op;
    printf("-----------------EJERCICIO 7-------------------\n");
    do {
        op = menuProgramas();
		switch(op) {
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 3:
				ejercicio3();
				break;
			case 4:
				ejercicio4();
				break;
			case 5:
				ejercicio5();
			case 6:
				ejercicio6();
				break;
			default:
				break;
		}
		printf("\n\n");
		system("pause");
		system("cls");
    } while(op != 0);
	return 0;
}