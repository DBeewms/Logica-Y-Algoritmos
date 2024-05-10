//Desarrolla un programa que solicite al usuario ingresar dos vectores
//de igual longitud y luego calcule la suma de ambos vectores. El
//resultado debe mostrarse en un tercer vector.

Algoritmo sumaVectores
    Definir long Como Entero;
    Definir array1, array2, array3, i Como Entero;
    Dimension array1[100], array2[100], array3[100];
    
    Escribir "Ingresa 2 vectores para calcular su suma...";
    Escribir "Dime la longitud del vector: ";
    Leer long;
	
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
        Si i = long-1 Entonces
            array3[i] <- array1[i] + array2[i];
            Escribir array3[i], Sin Saltar;
        Sino
            array3[i] <- array1[i] + array2[i];
            Escribir array3[i], ", ", Sin Saltar;
        FinSi
        i <- i + 1;
    FinMientras
	
FinAlgoritmo
