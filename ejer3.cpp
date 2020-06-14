#include <iostream>
#include <string>

using namespace std;

int main()
{
    int  anio;
cout<<"Bienvenido a su programa para calcular"<<endl;
cout<<"Porfavor Ingrese un numero: ";
cin>>anio;
if((anio %4 == 0 && anio%100 != 0)|| (anio &400 == 0))
{
    cout<< "Su numero ingresado "<<anio<< " es biciesto"<< " Y tiene 366 dias";
}
else
{
    cout<<"El numero ingresado "<<anio<<" no es biciesto" <<" Y tiene 365 dias";
}


    return 0;
}