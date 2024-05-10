// Dado un número natural n se desea calcular la suma de los números
// naturales desde 1 hasta n. Codifica el programa que resuelva este
// planteamiento.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, suma = 0;
    cout << "Dime un numero y calculare la suma de todos los numeros hasta llegar a tal numero..." << endl;
    cin >> num;

    int i = 1;
    while (i <= num)
    {
        cout << suma << " + " << i << " = ";
        suma = suma + i;
        cout << suma << endl;
        i++;
    }
    
    return 0;
}

