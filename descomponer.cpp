#include <iostream>

using namespace std;

int main()
{
    int numero=0;   // creamos una variable numero y su valor es 0
    cout<<"$:"; // imprime en la pantalla del terminal un texto 
    cin>>numero; // deja ingresar el valor de la variable numero desde el terminal 
    for (int i = 2; numero >= i; i++) //este ciclo empieza con variable i igual a 2 y va aumentando de a 1 y termina cuando este alcanse el valor de la variable numero
    {

        while(numero % i == 0) // si la variable i no es cero no se detendra el ciclo
        {
            cout<<i<<" x "; // se imprime el valor que da en el terminal y seguido con un texto que es por
            numero /= i; //se divide la variable numero con la variable i
        }

    }
}