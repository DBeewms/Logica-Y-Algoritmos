// Diseña un programa que solicite al usuario ingresar dos matrices y
// luego realice la multiplicación de matrices. Asegúrate de que las
// dimensiones de las matrices sean compatibles para la multiplicación y
// muestra la matriz resultante.

#include <iostream>

using namespace std;

#define MAX 100

int main() {
    int filas, columnas;

    cout << "Ingresa las dimensiones de las matrices a multiplicar:" << endl;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;

    int matriz1[MAX][MAX];
    int matriz2[MAX][MAX];
    int resultado[MAX][MAX];

    cout << "Ingresa los elementos de la Matriz 1:" << endl;
    int i = 0, j = 0;
    while (i < filas) {
        j = 0;
        while (j < columnas) {
            cout << "Ingresa el elemento en la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << "Ingresa los elementos de la Matriz 2:" << endl;
    i = 0, j = 0;
    while (i < filas) {
        j = 0;
        while (j < columnas) {
            cout << "Ingresa el elemento en la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < filas) {
        j = 0;
        while (j < columnas) {
            resultado[i][j] = 0;
            int k = 0;
            while (k < columnas) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    cout << endl;
    cout << "Matriz 1:" << endl;
    i = 0;
    while (i < filas) {
        j = 0;
        while (j < columnas) {
            cout << matriz1[i][j] << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    cout << "Matriz 2:" << endl;
    i = 0;
    while (i < filas) {
        j = 0;
        while (j < columnas) {
            cout << matriz2[i][j] << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    cout << "Producto de matrices:" << endl;
    i = 0;
    while (i < filas) {
        j = 0;
        while (j < columnas) {
            cout << resultado[i][j] << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    return 0;
}
