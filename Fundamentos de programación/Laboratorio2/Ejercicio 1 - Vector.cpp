/*1. Diseña una función que, dada un conjunto de números de un vector,
devuelva un vector con sólo aquellos números del primero que son
primos y otro vector con los números divisibles por 2 y por 3 a la vez.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],x,y;
	
	cout<<"Digite el numero de x: "; cin>>x;
	cout<<"Digite el numero de y: "; cin>>y;
	
	//Rellenando la vector	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
	
	cout<<"\nMostrando puntos de vectores\n\n";
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<numeros[i][j];
		}
	cout<<"\,";
	}
	
	
	getch();
	return 0;
}
