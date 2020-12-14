
/*Ejercicio 6
Finalmente implementar un algoritmo que generar un menú con 5 opciones. 
La elección de cada opción del menú ejecuta que corresponde a su número dentro del laboratorio. */

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
	printf("\n 1. Ejercicio 1: Imprimir texto ingresado por pantalla");
	printf("\n 2. Ejercicio 2: Imprimir numeros comprendidos entre extremos");
	printf("\n 3. Ejercicio 3: Imprimir si un numero positivo o negativo");
	printf("\n 3. Ejercicio 4: Contar caracteres digitos, caracteres, espacio.");
	printf("\n 3. Ejercicio 5: Operacion solicida por usuario suma, resta, etc.");
	printf("\n 3. Ejercicio 6: Operacion solicida por usuario suma, resta, etc.");
	printf("\n 0. Salir");
	printf("\n Escojer opcion >> ");

	scanf("%d", &op);
    flush_in();
	return op;
}

// Menu de operaciones que usa el ejercicio 6
int menuOperaciones() {
	int op;
	printf("\n*** Menu de operaciones ***");
	printf("\n 1. Suma");
	printf("\n 2. Resta");
	printf("\n 3. Multiplicacion");
	printf("\n 4. Division");
	printf("\n 5. Modulo");
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
    int result, op, num1, num2;
	printf("-----------------EJERCICIO 5-------------------\n");
	do {
		op = menuOperaciones();
		
		if (op != 0) {
            printf("\n Ingresar numero 1: ");
            scanf("%d", &num1);
            printf("\n Ingresar numero 2: ");
            scanf("%d", &num2);
        }
		
		switch(op) {
			case 1:
				result = num1 + num2;
				break;
			
			case 2:
				result = num1 - num2;
				break;
				
			case 3:
				result = num1 * num2;
				break;
				
			case 4:
				if (num2 != 0) {
					result = num1 / num2;
				} else {
					printf("\n Imposible dividir para 0 \n\n");
					continue;
				}
				break;
				
			case 5:
				if (num2 != 0) {
					result = num1 % num2;
				} else {
					printf("\n Imposible obtener modulo de una division para 0 \n\n");
					continue;
				}
				break;
			
			default: 
				printf("\n Opcion desconocida.");
				continue;
				break;
		}
		
		printf("\n El resultado de la operacion es: %d \n", result);
	} while (op != 0);
}


int main() {
    int op;
    printf("-----------------EJERCICIO 6-------------------\n");
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