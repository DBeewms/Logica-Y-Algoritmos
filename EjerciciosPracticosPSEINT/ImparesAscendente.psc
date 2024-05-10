// Desarrollar un programa que imprima los números impares en orden
// descendente que hay entre 1 y 100.

Algoritmo numerosImpares
    Definir i Como Entero;
    i <- 100;
    Mientras i >= 1 Hacer
        Si i MOD 2 <> 0 entonces
            Escribir i;
        FinSi
        i <- i - 1;
    FinMientras
FinAlgoritmo