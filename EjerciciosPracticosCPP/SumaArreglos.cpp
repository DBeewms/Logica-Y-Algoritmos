/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/


#include <iostream>
#define MAX 100

using namespace std;

int main(int argc, char const *argv[])
{
    int longitud;

    cout << "Ingresa 2 vectores para calcular su suma..." << endl;
    cout << "Dime la longitud del vector... ";
    cin >> longitud;
    
    int array1[MAX];
    int array2[MAX];
    int array3[MAX];

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
        if (i == longitud-1)
        {
            array3[i] = array1[i] + array2[i];
            cout << array3[i];
        }
        else
        {
            array3[i] = array1[i] + array2[i];
            cout << array3[i] << ", ";
        }
        i++;
    }

    return 0;
}
