#include <iostream>

using namespace std;


/*. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:
e =1/0! +1/1! +1/2! +1/3! +1/4! +1/5! + ...*/

int main()
{

    int N;
    float e = 0;

    cout<<"Ingrese el numero de elementos: ";
    cin >> N;



    for(int i = 0; i <= N-1; i++){
        float p = 1;
        for (int var = 1; var <= i-1; var++){

            p+= var*p;
        }
        e += 1/p;
    }
    cout<<"e es aproximadamente: "<<e<<endl;








    return 0;
}
