// Diseña un programa que solicite al usuario ingresar dos matrices y
// luego realice la multiplicación de matrices. Asegúrate de que las
// dimensiones de las matrices sean compatibles para la multiplicación y
// muestra la matriz resultante.

Algoritmo multiplicarMatrices
    Definir filas, columnas, i, j, k Como Entero;
    Definir MAX Como Entero;
	Definir matriz1, matriz2, resultado Como Entero;
    Dimension matriz1[100, 100];
	Dimension matriz2[100, 100];
	Dimension resultado[100, 100];
	
    Escribir "Ingresa las dimensiones de las matrices a multiplicar:";
    Escribir "Numero de filas: ";
    Leer filas;
    Escribir "Numero de columnas: ";
    Leer columnas;
	
    Escribir "Ingresa los elementos de la Matriz 1:";
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            Escribir "Ingresa el elemento en la fila ", i + 1, ", columna ", j + 1, ": ";
            Leer matriz1[i, j];
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
	
    Escribir "Ingresa los elementos de la Matriz 2:";
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            Escribir "Ingresa el elemento en la fila ", i + 1, ", columna ", j + 1, ": ";
            Leer matriz2[i, j];
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
	
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            resultado[i, j] <- 0;
            k <- 0;
            Mientras k < columnas Hacer
                resultado[i, j] <- resultado[i, j] + matriz1[i, k] * matriz2[k, j];
                k <- k + 1;
            FinMientras;
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
	
    Escribir "";
    Escribir "Matriz 1:";
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
	
    Escribir "Matriz 2:";
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            Escribir matriz2[i, j], Sin Saltar;
            j <- j + 1;
        FinMientras;
        Escribir "";
        i <- i + 1;
    FinMientras;
	
    Escribir "Producto de matrices:";
    i <- 0;
    Mientras i < filas Hacer
        j <- 0;
        Mientras j < columnas Hacer
            Escribir resultado[i, j], Sin Saltar;
            j <- j + 1;
        FinMientras;
        Escribir "";
        i <- i + 1;
    FinMientras;
	
FinAlgoritmo
