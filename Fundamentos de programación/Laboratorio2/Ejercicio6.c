/*Ejercicio 6
En este apartado se debe completar un programa que, dada una cantidad de
euros sin céntimos, la desglose en el menor número posible de billetes y
monedas. Por ejemplo, 1747 euros se desglosan en:
• 3 billetes de 500 euros
• 1 billete de 200 euros
• 2 billetes de 20 euros
• 1 billete de 5 euros
• 1 moneda de 2 euros
*/

#include <stdio.h>
#include <stdlib.h>
void cuenta_billetes_monedas(int, int[]);

int main ()
{
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

    system ("pause");
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