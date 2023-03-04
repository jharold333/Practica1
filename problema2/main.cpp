#include <iostream>

using namespace std;

/*Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
 * Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio
de los billetes y monedas disponibles no se puede lograr lacantidad deseada, el sistema deberá decir lo que resta para lograrla.Se necesita
un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada. Los billetes en
circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de
los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.*/



int main()
{

    int Cantidad;
    cout << "Ingrese la cantidad de monedas a devolver"<< endl;
    cin >> Cantidad;
    int cincuenta_mil;
    cincuenta_mil = Cantidad/50000;
    int veintemil;
    veintemil = Cantidad-cincuenta_mil*50000;
    int diezmil;
    diezmil = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000);
    int cincomil;
    cincomil = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000);
    int dosmil;
    dosmil = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000);
    int Mil;
    Mil = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000-(dosmil/2000)*2000);
    int Quinientos;
    Quinientos = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000-(dosmil/2000)*2000)-(Mil/1000)*1000;
    int Doscientos;
    Doscientos = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000-(dosmil/2000)*2000)-(Mil/1000)*1000-(Quinientos/500)*500;
    int Cien;
    Cien = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000-(dosmil/2000)*2000)-(Mil/1000)*1000-(Quinientos/500)*500-(Doscientos/200)*200;
    int Cincuenta;
    Cincuenta = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000-(dosmil/2000)*2000)-(Mil/1000)*1000-(Quinientos/500)*500-(Doscientos/200)*200-(Cien/100)*100;
    int monedas_de_veintemil;
    monedas_de_veintemil = veintemil/20000;
    int monedas_de_diezmil;
    monedas_de_diezmil = diezmil/10000;
    int monedas_de_cincomil;
    monedas_de_cincomil = cincomil/5000;
    int monedas_de_dosmil;
    monedas_de_dosmil = dosmil/2000;
    int monedas_de_mil;
    monedas_de_mil = Mil/1000;
    int Monedas_De_quinientos;
    Monedas_De_quinientos = Quinientos/500;
    int Monedas_De_Doscientos;
    Monedas_De_Doscientos = Doscientos/200;
    int Monedas_De_Cien;
    Monedas_De_Cien = Cien/100;
    int Monedas_De_Cincuenta;
    Monedas_De_Cincuenta = Cincuenta/50;
    int Restante;
    Restante = (Cantidad-cincuenta_mil*50000-(veintemil/20000)*20000-(diezmil/10000)*10000-(cincomil/5000)*5000-(dosmil/2000)*2000)-(Mil/1000)*1000-(Quinientos/500)*500-(Doscientos/200)*200-(Cien/100)*100-(Cincuenta/50)*50;
    cout << "50.000 : " <<cincuenta_mil<<endl;
    cout << "20.000 : " <<monedas_de_veintemil<<endl;
    cout << "10.000 : " <<monedas_de_diezmil<<endl;
    cout << "5.000 : " <<monedas_de_cincomil<<endl;
    cout << "2.000 : " <<monedas_de_dosmil<<endl;
    cout << "1000 : " <<monedas_de_mil<<endl;
    cout << "500 : "<< Monedas_De_quinientos<<endl;
    cout << "200 : "<<Monedas_De_Doscientos<<endl;
    cout << "100 : "<<Monedas_De_Cien<<endl;
    cout << "50 : "<<Monedas_De_Cincuenta<<endl;
    cout << "Faltante: "<<Restante<<endl;







    return 0;
}
