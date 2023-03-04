#include <iostream>

using namespace std;

/* Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta no
 * sumar 2 veces los múltiplos comunes. Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23 Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.*/


int main()
{

    int A,B,C,cont=0,conta1=0,conta2;

    cout<<"Ingrese el valor de a: ";
    cin>>A;
    cout<<"Ingrese el valor de b: ";
    cin>>B;
    cout<<"Ingrese el valor de c: ";
    cin>>C;

    for(int i=1;A*i<C;i++){
        cont += A*i;
        cout<<A*i<<"+";
       }
        for(int r=1;B*r<C;r++){
          if(B*r%A!=0)
          {
            conta1 += B*r;
            cout<<B*r;
            if(B*(r+1)<C)
            cout<<'+';
          }
        }


    conta2=cont+conta1;
    cout<<"="<<conta2<<endl;





    return 0;



}
