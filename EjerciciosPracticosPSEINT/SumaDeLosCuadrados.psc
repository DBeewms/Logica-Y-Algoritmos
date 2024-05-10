// Escriba el programa para calcular la suma de los cuadrados de los
// números entre 1 y 100.

Algoritmo sumaCuadrados
    Definir suma, i Como Entero;
    suma <- 0;
    i <- 1;
	
    Mientras i <= 99 Hacer
        Escribir suma, " + ", i, " ^2 ", " = " Sin Saltar;
        suma <- suma + i^2;
        Escribir suma;
        i <- i + 1;
    FinMientras
	
FinAlgoritmo
