// Para un grupo de clase de 8 estudiantes, realice un programa que
// permita calcular y dar como salida lo siguiente:
// ? Cantidad de alumnos aprobados
// ? Cantidad de alumnos reprobados
// ? Promedio general del grupo
// Nota mínima para aprobar: 70

Algoritmo calcularAprobados
    Definir promedio Como Real;
	Definir i Como Entero;
    Definir aprobados Como Entero;
    Definir reprobados Como Entero;
    Definir notas Como Real;
    Dimension notas[8];
	
    promedio <- 0;
    aprobados <- 0;
    reprobados <- 0;
    i <- 0;
	
    Mientras i < 8 Hacer
        Escribir "Nota final del estudiante #", i+1, ": ";
        Leer notas[i];
		
        Si notas[i] >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
		
        promedio <- promedio + notas[i];
        i <- i + 1;
    FinMientras
	
    promedio <- promedio / 8;
	
    Escribir "Aprobados: ", aprobados;
    Escribir "Reprobados: ", reprobados;
    Escribir "Promedio de toda la clase: ", promedio;
	
FinAlgoritmo
