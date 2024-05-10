// Crea un programa que permita al usuario ingresar dos vectores de la
// misma longitud y luego calcule su producto punto. Muestra el resultado
// al finalizar el cálculo.

#include <iostream>
#define MAX 100

using namespace std;

int main(int argc, char const *argv[])
{
    int longitud;

    cout << "Ingresa 2 vectores para calcular su producto punto..." << endl;
    cout << "Dime la longitud del vector... ";
    cin >> longitud;
    
    int array1[MAX];
    int array2[MAX];
    int producto = 0;

    int i = 0;
    while (i < longitud)
    {
        cout << "Arreglo 1" << endl;
        cout << "Dime un numero: ";
        cin >> array1[i];
        i++;
    }

    i = 0;
    while (i < longitud)
    {
        cout << "Arreglo 2" << endl;
        cout << "Dime un numero: ";
        cin >> array2[i];
        i++;
    }

    cout << endl;
    i = 0;
    while (i < longitud)
    {
        producto = producto + (array1[i] * array2[i]);
        i++;
    }

    cout << "Producto punto: " << producto << endl;

    return 0;
}