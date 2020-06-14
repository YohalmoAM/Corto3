#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void){

int x;
int numero;
int contador = 0;
int intentos = 5;

srand((unsigned)time(NULL));
x = rand()& (100);
cout<<"Adivina el numero entre 0 y 100!"<<endl;
do{
    
    cout<<"Introduce un numero: "<<endl;
    cin>>numero;
    if (numero > x){

    cout<<"El numero es muy alto"<<endl;}
    
    else if (numero < x){
    cout<<"El numero es muy bajo"<<endl;}
    contador++;
}
while(numero !=x && contador< 5);
cout<<"Adivinastes";

if(numero !=x && contador >= 5)
cout<<"Lastima, Se acabaron los intentos";

}