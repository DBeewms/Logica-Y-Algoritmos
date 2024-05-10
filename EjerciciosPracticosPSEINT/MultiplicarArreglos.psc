// Crea un programa que permita al usuario ingresar dos vectores de la
// misma longitud y luego calcule su producto punto. Muestra el resultado
// al finalizar el cálculo.

Algoritmo productoPunto
    Definir long, i Como Entero;
    Definir array1, array2 Como Entero;
    Definir producto Como Entero;
	
    Escribir "Ingresa 2 vectores para calcular su producto punto...";
    Escribir "Dime la longitud del vector... ";
    Leer long;
	
    Dimension array1[100];
    Dimension array2[100];
    producto <- 0;
	
    i <- 0;
    Mientras i < long Hacer
        Escribir "Arreglo 1";
        Escribir "Dime un numero: ";
        Leer array1[i];
        i <- i + 1;
    FinMientras
	
    i <- 0;
    Mientras i < long Hacer
        Escribir "Arreglo 2";
        Escribir "Dime un numero: ";
        Leer array2[i];
        i <- i + 1;
    FinMientras
	
    Escribir "";
    i <- 0;
    Mientras i < long Hacer
        producto <- producto + (array1[i] * array2[i]);
        i <- i + 1;
    FinMientras
	
    Escribir "Producto punto: ", producto;
	
FinAlgoritmo
