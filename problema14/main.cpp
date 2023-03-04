#include <iostream>

using namespace std;

/* Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111 */



int invertir(int n);

int main()
{
    int Num=0,maxpalin=0,multip1,multip2;

        for(int cont1 = 101; cont1 <= 999; cont1++){
            for(int cont2 = 101; cont2 <= 999; cont2++){
                Num = cont1*cont2;
                if(Num == invertir(Num)){
                    if(Num>maxpalin){
                    maxpalin = Num;
                    multip1 = cont1;
                    multip2 = cont2;
                    }
                }
            }
        }

           cout<<multip1<<"*"<<multip2<<"="<<maxpalin<<endl;
        return 0;
    }

    int invertir(int Num){
        int respuesta = 0;

        while(Num > 0){
            respuesta += Num % 10;
            respuesta *= 10;
            Num /= 10;
        }
           return respuesta/10;



}
