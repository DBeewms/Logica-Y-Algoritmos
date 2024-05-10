// Implementa un programa que solicite al usuario ingresar una matriz y
// luego calcule su transposición. La transposición de una matriz se
// realiza intercambiando filas por columnas. Imprime la matriz
// transpuesta como salida.

#include <iostream>
#define MAX 100

using namespace std;

int main(int argc, char const *argv[])
{
    int filas, columnas;

    cout << "Ingresa una matriz para transposicionarla..." << endl;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;
    
    int matriz1[MAX][MAX];

    int i = 0;
    while (i < filas)
    {
        int j = 0;
        while (j < columnas)
        {
            cout << "Matriz 1" << endl;
            cout << "Ingresa un numero, fila " << i+1 << ", columna " << j+1 << ":"<< endl;
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << endl;
    cout << "Matriz 1" << endl;
    i = 0;
    while (i < filas)
    {
        int j = 0;
        while (j < columnas)
        {
            cout << matriz1[i][j] << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    cout << "Transposicion..." << endl;
    i = 0;
    while (i < columnas)
    {
        int j = 0;
        while (j < filas)
        {
            cout << matriz1[j][i] << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    
    return 0;
}
