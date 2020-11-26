
/*Ejercicio 5
Implementar un programa que muestre un menú al usuario para que seleccione la operación 
que desea realizar: suma, resta, división, módulo o multiplicación y según la opción seleccionada 
se realice la operación solicitando previamente los números al usuario por teclado. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
	return op;
}


int main() {
	int result, op, num1, num2;
	
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
		printf("\nAutor:Michelle Pérez Sosa Grupo 13");
		system("pause");
		system("cls");
		
	} while (op != 0);
	
	return 0;
}
