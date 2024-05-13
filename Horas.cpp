#include <iostream>

using namespace std;
int main ()
{
    int H = 0;
    string Nombre;
    float Salario = 0.0;
    float Extra = 0.0;
    float Impuesto = 0.0;
    cout << "Inserte nombre" << '\n';
    cin >> Nombre;
    cout << "Inserte cantidad de horas" << '\n';
    cin >> H;
    if (H <= 160)
    {
        Salario = H * 10;
        cout << Nombre << " esta ganando " << "$" << Salario;
    }
    else if (H >= 161)
    {
        Extra = H - 160;
        Salario = ((Extra * 15) + 1600);

        if (Salario <= 2000)
        {
            cout << "Salario libre de impuestos";
            cout << Nombre << " esta ganando " << "$" << Salario;
        }    
    //g++ If else numeros.cpp-0 primp
        else if (Salario <= 2200)
            {
                Impuesto = Salario * 0.20;
                Salario = Salario - Impuesto;
                cout << Nombre << " esta ganando " << "$" << Salario;
            }
        else if (Salario >= 2200)
            {
                Impuesto = Salario * 0.30;
                Salario = Salario - Impuesto;
                cout << Nombre << " esta ganando " << "$" << Salario;
            }
    }
    return 0;
}
