#include <iostream>
#include <string>
using namespace std;

struct mision
{
    string n_ubic;
    int dificultad;
    int durac;
    char tipo;
}persona[4];
void time(mision*r, int n)
{
  For(i = 0; i < n; i++)
  {
    if(((r+i)->dificultad == 4) || ((r+i)->dificultad== 5))
    {
    suma += (r+i)->tiempo;
    }

  }
}

Return suma
}
int main()
{
    int *r = &persona[4]
    int n = 4;
    cout << "Bienvenido, tripulante" <<endl;
    cout << "Ingrese su nombre y su ubicacion actual" << endl;
    getline(cin, n_ubic, '\n')
    for (int i = 0; i < 4; i++)
    {
        cout << "Introduzca la dificultad de su tarea:" << endl;
        cin >> persona[n].dificultad;
        cout << "Coloque la duración de la tarea en segundos:" << endl;
        cin >> persona[n].durac;
        do
        {
           cout << Ingrese el tipo de tarea: << endl;
           cin >> persona[n].tipo;
        } while (tipo == 'R' && tipo == 'O' && tipo == 'C' );
        
    }
}
