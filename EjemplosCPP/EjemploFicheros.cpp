#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

void escribir();

int main(int argc, char const *argv[])
{
    escribir();

    return 0;
}

void escribir()
{
    ofstream archivo;
    string nombreArchivo, frase;
    int opcion;

    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios :: out);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
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
