/*Ejercicio 3
Implemente un programa que solicite un n�mero y escribir
ppor pantalla si es positivo o negativo*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int number;
	int opc;
	printf("Ejercicio 3: \n");
	printf("-------------------------------\n");
	do{
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
	}while(opc==1);
	return 0;
	
}
