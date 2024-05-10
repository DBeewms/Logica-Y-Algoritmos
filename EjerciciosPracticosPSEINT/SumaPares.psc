// Hacer un programa que sume los números pares comprendidos entre
// 100 y 200.

Algoritmo sumaNumerosPares
    Definir suma, i Como Entero;
    suma <- 0;
    i <- 100;
	
    Mientras i <= 200 Hacer
        Si i MOD 2 = 0 Entonces
            Escribir suma, " + ", i, " = ", Sin Saltar;
            suma <- suma + i;
            Escribir suma;
        FinSi
        i <- i + 1;
    FinMientras
	
FinAlgoritmo
