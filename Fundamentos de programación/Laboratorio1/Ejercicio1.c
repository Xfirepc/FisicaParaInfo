/* Ejercicio 1
Implementar un programa que  pida un texto al usuario y lo escriba por pantalla */

#include <stdio.h>

void flush_in()
{
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main () {
	
	char texto[200];
	printf("-----------------EJERCICIO 1-------------------\n");
	printf("Ingrese un texto: ");
    scanf("%199[^\n]", texto);
    flush_in();
     
	printf("El texto ingresado es: %s", texto);

	return 0;
}

