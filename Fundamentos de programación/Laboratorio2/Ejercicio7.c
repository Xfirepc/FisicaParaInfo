
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

void cuenta_billetes_monedas(int cantidad, int valor[]) 
{
    int i = 0, n;
    while (cantidad > 0) 
    {
        n = cantidad / valor[i];
        cantidad = cantidad % valor[i];
        if (n > 0) {
            printf("%d billetes/monedas de %d euros \n", n, valor[i]);
        }
        i++;
    }
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
}

void ejercicio2() {
	char cadena[50];

    printf("-----------------EJERCICIO 2-------------------\n");
    printf("Ingrese la cadena a verificar: ");
    scanf(" %199[^\n]%*[^\n]%*c", cadena);

    printf("\n");
    isPalindrome(cadena, strlen(cadena));
}

void ejercicio3() {
	printf("-----------------EJERCICIO 3-------------------\n");
    char cadena[100], subcadena[100];
    int i, j, subcadlen, aux, contains = 0, cont = 0;

    printf("Ingrese la cadena principal: ");
    scanf(" %199[^\n]%*[^\n]%*c", cadena);

    printf("Ingrese la subcadena: ");
    scanf(" %199[^\n]%*[^\n]%*c", subcadena);
    printf("\n\n");

    subcadlen = strlen(subcadena);

    for(i = 0; i < strlen(cadena); i++) {
        aux = i;
        for(j = 0; j < subcadlen; j++) {
            if (cadena[aux] == subcadena[j]) {
                aux++; cont++;
                if (cont == subcadlen)
                    contains = 1;
            } else break;
        }
        if (contains == 1) {
            printf("*");
        } else {
            printf("%c", cadena[i]);
        }
       contains = 0;
       cont = 0;
    }
}

void ejercicio4() {
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
}

void ejercicio5() {
	printf("-----------------EJERCICIO 6-------------------\n");

    int cols, rows, i ,j;
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &rows);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &cols);

    int matriz[rows][cols];

    for(i= 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Ingrese la posicion [%d][%d] >> ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz normal \n");
    for(i= 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("\t %d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transpuesta \n");
    for(i= 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            printf("\t %d", matriz[j][i]);
        }
        printf("\n");
    }
}

int ejercicio6() {
	int valor[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int cantidad, op;
    
    printf("-----------------EJERCICIO 6-------------------\n");
    do {
        printf ("\nIntroduce una cantidad de euros (sin centimos): ");
        scanf ("%d", &cantidad);
        printf ("\n");

        if (cantidad <= 0){
            printf ("ERROR: La cantidad debe ser mayor que cero.\n");
            system ("pause");
            return -1;
        }
        cuenta_billetes_monedas(cantidad, valor);

        printf ("\nDesea desglosar otra cantidad? (Si = 1, No = 0):  ");
        scanf("%d", &op);
    } while(op == 1);
    return 0;
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
				break;
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
