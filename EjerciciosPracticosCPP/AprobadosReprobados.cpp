// Para un grupo de clase de 8 estudiantes, realice un programa que
// permita calcular y dar como salida lo siguiente:
// ✓ Cantidad de alumnos aprobados
// ✓ Cantidad de alumnos reprobados
// ✓ Promedio general del grupo
// Nota mínima para aprobar: 70

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float promedio = 0;
    int aprobados = 0, reprobados = 0;
    float notas[8];
    int i = 0;

    while (i < 8)
    {
        cout << "Nota final del estudiante #" << i+1 << ": ";
        cin >> notas[i];

        if (notas[i] >= 70) aprobados++;
        else reprobados++;
        
        promedio = promedio + notas[i];
        i++;
    }
    promedio = promedio / 8;

    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;
    cout << "Promedio de toda la clase: " << promedio << endl;

    return 0;
}