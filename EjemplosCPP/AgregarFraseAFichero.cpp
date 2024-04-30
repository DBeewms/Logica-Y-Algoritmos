#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

void escribir();
void leer();
void mostrar();

int main(int argc, char const *argv[])
{
    int opcion;

    do
    {
        cout << "MENU" << endl;
        cout << "1. Escribir en el archivo" << endl;
        cout << "2. Leer el archivo" << endl;
        cout << "3. Mostrar contenido del archivo" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
            case 1:
                escribir();
                break;
            case 2:
                leer();
                break;
            case 3:
                mostrar();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;

    } while (opcion != 4);

    return 0;
}

void escribir()
{
    ofstream archivo;
    string nombreArchivo, frase;
    int opcion;

    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::in | ios::out | ios::app); // Open the file in append mode

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    // Check if the file is empty
    if (archivo.tellp() == 0)
    {
        cout << "El archivo esta vacio. Agregando al final." << endl;
    }
    else
    {
        cout << "El archivo no esta vacio. Agregando al final." << endl;
    }

    do
    {
        cout << "Digite la frase a guardar en el archivo: ";
        getline(cin, frase);

        archivo << frase << endl;

        cout << "\nDesea agregar otra frase? ";
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> opcion;
        cin.ignore();
    } while (opcion == 1);

    archivo.close();

    cout << "Se han guardado los cambios correctamente" << endl;
}

void leer()
{
    ifstream archivo;
    string nombreArchivo, linea;

    cout << "Ingrese el nombre del archivo a leer: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::in);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    cout << "\nContenido del archivo:\n";
    while (getline(archivo, linea))
    {
        cout << linea << endl;
    }

    archivo.close();
}

void mostrar()
{
    ifstream archivo;
    string nombreArchivo, linea;

    cout << "Ingrese el nombre del archivo a mostrar: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::in);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    cout << "\nContenido del archivo:\n";
    while (getline(archivo, linea))
    {
        cout << linea << endl;
    }

    archivo.close();
}
