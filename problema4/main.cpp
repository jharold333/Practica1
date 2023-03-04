#include <iostream>

using namespace std;

/*Escriba un programa para leer dos números enteros con el siguiente signicado: el valor del primer número representa una hora del día en un reloj de 24 horas,
 * de modo que 1245 representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración de la misma manera, por lo que 345
 * representa tres horas y 45 minutos. El programa debe sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.** */




int main()
{

     int Hora1;
     int Hora2;
     int Horafinal;
     int Horafinal2;




     cout << "Ingrese una hora en formato de numero, es decir si su hora es 12:45 ingrese 1245"<<endl;
     cin >> Hora1;
     cout << "Ingrese una hora que desea sumar a la primera, en formato de numero, es decir si su hora a sumar es 3:45 ingrese 345"<<endl;
     cin >> Hora2;




     Horafinal = Hora1+Hora2;
     Horafinal2 = Horafinal+40;

     if(Hora1>2400)
         cout <<"Invalido: "<<Hora1<<" es un tiempo invalido"<<endl;
     else if(Horafinal>2400)
         cout <<"Invalido: "<<Hora2<<" es un tiempo invalido"<<endl;
     else if(Horafinal%60!=0)
         cout << "La horas es: "<<Horafinal2<<endl;
     else
         cout << "La horas es: "<<Horafinal<<endl;









    return 0;
}
