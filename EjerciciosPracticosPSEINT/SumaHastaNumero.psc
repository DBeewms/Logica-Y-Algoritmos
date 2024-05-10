// Dado un n?mero natural n se desea calcular la suma de los n?meros
// naturales desde 1 hasta n. Codifica el programa que resuelva este
// planteamiento.

Algoritmo sumaNumerosNaturales
    Definir num, suma, i Como Entero;
    Escribir "Dime un numero y calculare la suma de todos los numeros hasta llegar a tal numero...";
    Leer num;
	
    suma <- 0;
    i <- 1;
	
    Mientras i <= num Hacer
        Escribir suma, " + ", i, " = " Sin Saltar;
        suma <- suma + i;
        Escribir suma;
        i <- i + 1;
    FinMientras
	
FinAlgoritmo
