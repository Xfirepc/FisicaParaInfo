/* Implementar un programa que imprima todos los números que hay
entre dos números introducidos por el usuario comenzando por el
menor y su suma.
*/

#include <iostream>            
#include <stdlib.h>

using namespace std;
int mostrar(int a, int b){
    int max=0, min=0;
    
 if(a>b){
           max=a; min=b;
    }
    

 else {
     max=b; min=a;
     }
     
     for(int i=min;i<=max; i++){
             cout<<i<<"-";
             }
             
             cout<<"\n";
               
}

int main (){
    int a,b;
    cout<<"Ingrese numero: "; cin>>a;
    cout<<"Ingrese numero: "; cin>>b;
    
    cout<<"Los numeros comprendidos de "<<a<< " hacia "<<b<<" son:";
    mostrar(a,b);
    system("PAUSE");
    return 0;

}
