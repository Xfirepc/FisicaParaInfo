
/*Ejercicio 6
Finalmente implementar un algoritmo que generar un menú con 5 opciones. 
La elección de cada opción del menú ejecuta que corresponde a su número dentro del laboratorio. */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


int menuProgramas() {
	int op;
	printf("\n*** Menu de opciones ***");
	printf("\n 1. Ejercicio 1: Imprimir texto ingresado por pantalla");
	printf("\n 2. Ejercicio 2: Imprimir numeros comprendidos entre extremos");
	printf("\n 3. Ejercicio 3: Imprimir si un numero positivo o negativo");
	printf("\n 3. Ejercicio 4: Contar caracteres digitos, caracteres, espacio.");
	printf("\n 3. Ejercicio 5: Operacion solicida por usuario suma, resta, etc.");
	printf("\n 0. Salir");
	printf("\n Escojer opcion >> ");

	scanf("%d", &op);
	return op;
}


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


void ejercicio1 () {
	char texto[200];
    printf("-----------------EJERCICIO 1-------------------\n");
	printf("Ingrese un texto: ");
    scanf("%199[^\n]", texto);
    flush_in();
	printf("El texto ingresado es: %s", texto);
}

void ejercicio2() {

}

void ejercicio3() {
    int number;
	int opc;
	printf("-----------------EJERCICIO 3-------------------\n");
	do {
		printf("Introduzca un numero entero \n");
		scanf("%d",&number);
		if(number==0||number==-0){
			printf("El numero %d no tiene signo \n",number);
		}else if(number >0){
		printf("El numero %d es POSITIVO \n",number);
		}else if(number<0){
			printf("El numero %d es NEGATIVO \n",number);
		}
		printf("-------------------------------\n");
		printf("Desea ejecutar otra vez el programa \n");
		printf("1.Si\n");
		printf("2.No \n");
		printf("Escriba la opcion: ");
		scanf("%d",&opc);
	} while(opc==1);
}

void ejercicio4() {
    int contador_caracter=0;
	int contador_digito=0;
	int contador_espacio=0;
	int opc;
	char respuesta= '\0';
	printf("-----------------EJERCICIO 4-------------------\n");
	do {
		printf("-------------------------------------------\n");
		printf("Escribe un caracter, un digito o un espacio: ");
		scanf("%c",&respuesta);
		if (respuesta >='a' && respuesta <='z') { 
	     printf("La letra %c es minuscula. \n",respuesta); 
	     contador_caracter=contador_caracter+1;
	 	 }else if (respuesta >='A' && respuesta <='Z') { 
	     printf("La letra %c es mayuscula. \n",respuesta); 
	     contador_caracter= contador_caracter+1;
	  	}else if(respuesta==' '){
	  		printf("Es un espacio \n");
	  		contador_espacio=contador_espacio+1;
		}else{
		  	printf("%c Es un digito \n",respuesta);
		  	contador_digito=contador_digito+1;
		}
		printf("\nTotal de digitos: %d\nTotal de caracteres: %d\nTotal de espacios: %d ",contador_digito,contador_caracter,contador_espacio);
		printf("\nDeseas escribir otro caracter,digito o espacio? \n1.Si\n2.No \nOpcion: ");
		scanf("%d",&opc);
		flush_in();
		//fflush(stdin);
	} while(opc==1);
	printf("Gracias!\n");
	system("pause");
}

void ejercicio5() {
    int result, op, num1, num2;
    printf("-----------------EJERCICIO 5-------------------\n");
	do {
		op = menuOperaciones();

		if (op != 0) {
            printf("\n Ingresar numero 1: ");
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
		system("pause");
		system("cls");
		
	} while (op != 0);	
}


//_______Función para la limpieza de buffer_________

void flush_in()
{
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}


int main() {
    int op;
    printf("-----------------EJERCICIO 6-------------------\n");
    do {
        op = menuOpciones();
    }
}