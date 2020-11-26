/*Ejercicio 4
Implementar un algoritmo que cuente el número de caractéres captados
desde teclado, determinar si es un dígito o un carácter o un espacio,
e imprimir por pantalla estos número según el tipo*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//_______Función para la limpieza de buffer_________

void flush_in(){
	
     int ch;
     while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
     } 
     
//__________________________________________________

int main(){
	
	int contador_caracter=0;
	int contador_digito=0;
	int contador_espacio=0;
	int opc;
	char respuesta= '\0';
	//char respuesta[1];
	printf("-----------------EJERCICIO 4-------------------\n");
	do{
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
	}while(opc==1);
	printf("Gracias!\n");
	system("pause");
	return 0;
}


