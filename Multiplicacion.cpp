#include <iostream>
#include <cmath>

using namespace std;

int multi(int a, int b) //Función para poder discriminar el valor del número
{
  if(b == 1){
    return a;
  }
  return a + multi(a, b-1); //retornar a la variable
}


int main() //Llamada de funciones
{
  int a;
  int b;

  cout << "Ingrese el valor de a: ";
  cin >> a;

  cout << "Ingrese el valor de b: ";
  cin >> b;

  if (a<=0 || b<=0)
  {
    cout <<"ERROR"<<endl;
    exit(0);
  }
  
  cout << "El producto de ambos enteros es: ";
  cout <<  multi(a,b); 
}
