#include <iostream>

using namespace std;

/*
 * Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11
*/




int main()
{
    int Num,conta=0;

    cout<<"Ingrese un numero: ";
    cin>>Num;

    int Finc = Num-1;

    while(conta!=1)

    {   conta=0;
        while(Num%Finc!=0){
            Finc--;
        }
        for(int i=1;Finc!=i;i++)//saber si es primo o no
        {       if(Finc%i==0){
                conta++;}
        }

        if(Finc==1){
            conta=1;
            cout<<Num<<endl;
        }


        else if(conta!=1){
            Finc--;}


        else
            cout<<"El mayor factor primo de "<<Num<<" es "<<Finc<<endl;

    }

    return 0;
}
