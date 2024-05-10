// Escriba el programa para calcular la suma de los cuadrados de los
// números entre 1 y 100.

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    int i = 1;

    while (i < 100)
    {
        cout << suma << " + " << i << " ^2 " << " = ";
        suma = suma + pow(i,2);
        cout << suma << endl;
        i++;
    }
    
    return 0;
}
