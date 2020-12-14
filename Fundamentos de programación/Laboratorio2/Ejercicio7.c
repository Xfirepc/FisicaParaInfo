
/*Ejercicio 7
Finalmente implementar un algoritmo que generar un menú con 6
opciones. La elección de cada opción del menú ejecuta cada ejercicio
anterior 1,2,3,4,5,6 con funciones */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//_______Función para la limpieza de buffer_________

void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}


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


int ejercicio1 () {

}

void ejercicio2() {

}

void ejercicio3() {

}

void ejercicio4() {

}

void ejercicio5() {

}

void ejercicio5() {

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