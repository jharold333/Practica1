#include <iostream>

using namespace std;

/*
La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie, si n es par, el siguiente elemento es n/2,
y si n es impar, el siguiente elemento es 3n+1. Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie.

*/


int main()
{
    int numero,num1=0,N=0,conta=1,conta1=0,almacena=0;


    cout << "Ingrese un numero: ";
    cin>>numero;

    num1 = numero-1;

   for(int i = num1; i >= 1; i--)
   {    N = i;
    while(N!=1)
    {
       if(N%2==0){
        N = N/2;}
       else if(N!=1){
        N = 3*N+1;}

       conta++;
    }
   if(conta>conta1){
       conta1 = conta;
       almacena = i;
   }
   conta = 1;

   }

   cout<<"La serie mas larga es con la semilla: "<<almacena<<" teniendo "<<conta1<<" terminos"<<endl;

   cout<<"La serie mas larga es la siguiente: "<<almacena;

   while(almacena!=1)
   {
      if(almacena%2==0){
       almacena = almacena/2;
         cout<<" "<<almacena;}

      else if(almacena!=1){
       almacena = 3*almacena+1;
      cout<<" "<<almacena;}


   }
       cout<<endl;
   return 0;
}
