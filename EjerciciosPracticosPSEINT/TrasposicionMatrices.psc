// Implementa un programa que solicite al usuario ingresar una matriz y
// luego calcule su transposición. La transposición de una matriz se
// realiza intercambiando filas por columnas. Imprime la matriz
// transpuesta como salida.

Algoritmo transponerMatriz
    Definir filas, columnas, i, j Como Entero;
    Definir matriz1 Como Entero;
    Dimension matriz1[100, 100];
	
    Escribir "Ingresa una matriz para transponerla...";
    Escribir "Numero de filas: ";
    Leer filas;
    Escribir "Numero de columnas: ";
    Leer columnas;
	
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            Escribir "Matriz 1";
            Escribir "Ingresa un numero, fila ", i+1, ", columna ", j+1, ":";
            Leer matriz1[i, j];
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
	
    Escribir "";
    Escribir "Matriz 1";
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            Escribir matriz1[i, j], Sin Saltar;
            j <- j + 1;
        FinMientras;
        Escribir "";
        i <- i + 1;
    FinMientras;
	
    Escribir "Transposicion...";
    i <- 0;
    Mientras i < columnas Hacer
        j <- 0;
        Mientras j < filas Hacer
            Escribir matriz1[j, i], Sin Saltar;
            j <- j + 1;
        FinMientras;
        Escribir "";
        i <- i + 1;
    FinMientras;
    
FinAlgoritmo
