/* Dise�ar una funci�n que informe si una cadena es un pal�ndromo (una
cadena es un pal�ndromo si se lee igual de izquierda a derecha que de
derecha a izquierda). Ejemplo: radar*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 25

int main()
{
    int p_i, p_f;
    char Palabra[MAX], caracter;
    int i;
    printf("-----------------EJERCICIO 2-------------------\n");

    printf("\nIntroduzca la palabra: ");
    scanf("%c", &caracter);
    i=0;
    while(i<MAX && caracter !='.')
    {
    Palabra [i]=caracter;
    i++;
    scanf("%c", &caracter);
}
   
   p_i=0;
   p_f=i-1;
   
   while(p_i<p_f && Palabra[p_i]==Palabra[p_f])
   {
                 p_i++;
                 p_f--;
}

if(p_i>=p_f) printf("\nLa palabra es palindroma!\n");
else printf("\nLa palabra no es palindroma!\n");
              
   
    
    printf("\n\n");
    system("pause");
    return 0;
}


