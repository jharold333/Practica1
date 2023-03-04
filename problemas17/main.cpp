#include <iostream>

using namespace std;
/*

La secuencia de números triangulares se forma al sumar su posición en el arreglo
con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
Si listamos los números triangulares y sus divisores tenemos:
1: 1
3: 1,3
6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
8
Nota: la salida del programa debe ser:
El numero es: 28 que tiene 6 divisores


*/


int main()
{
    int conta=0,k,N=1;

    cout<<"Ingrese un numero: ";
    cin>>k;


        for(int i=1; conta!=k+1; i++)
        {   N = i;
            N = N *(N+1)/2;
            for(int j = 1; j<= N ; j++)
            {
                if(N%j==0)
                {
                    conta++;
                }

            }
            if(conta>=k+1)
            {
                cout<<"El numero es: "<<N<<" que tiene "<<conta<<" divisores"<<endl;
                break;
            }
            else{
                conta=0;}
        }
        return 0;
}
