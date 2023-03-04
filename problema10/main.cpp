#include <iostream>

using namespace std;

/* Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7. */




int main(){

    int Num,conta=0,n,conta1=0;


    cout<<"Ingrese un numero: ";
    cin>>n;

    Num=2;
    while(conta!=n){

        for(int i = 1; i <=Num; i++){
            if(Num%i==0){
            conta1++;}
                if (conta1==2 && i==Num)
                conta++;
        }
        conta1=0;
    Num++;
        }
    cout<<Num-1<<endl;

    return 0;







}
