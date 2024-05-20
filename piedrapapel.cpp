#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    int b = 1 + rand() % 3;
    int intentos = 3;
    do{
        cout << "Piedra, papel o tijera\n";
        cout << "Elija su opcion usando numeros del 1 al 3: ";
        cin >> a;
        if (a == 1 || a == 2 || a == 3){
            if (a == b){
                cout << "Es un empate\n";
            }
            else{
                if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2))
                {
                    cout << b << "\n";
                    cout << "Usted ha ganado!!!!";
                    break;
                }
                else
                {
                    cout << b<<"\n";
                    cout << "Usted ha perdido:(\n";
                }
            }
        }else{
            cout << "Opcion invalida\n";
        }
        intentos--;
    } while (intentos > 0);

    return 0;
}
