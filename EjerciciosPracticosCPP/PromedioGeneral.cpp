// Realice un programa que permita calcular y dar como salida el
// promedio general de una sección, tomando en cuenta que está
// compuesta por 10 estudiantes y que se tiene la nota de cada uno de
// ellos.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float promedio = 0;
    float notas[10];
    int i = 0;

    while (i < 10)
    {
        cout << "Nota final del estudiante #" << i+1 << ": ";
        cin >> notas[i];
        promedio = promedio + notas[i];
        i++;
    }

    promedio = promedio / 10;

    cout << "Promedio de toda la clase: " << promedio << endl;

    return 0;
}
