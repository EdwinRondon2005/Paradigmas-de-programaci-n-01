#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 6 de Paradigmas de programación.

int main()
{
	int n;
	float precio;
	
	printf("Introduzca la cantidad de tela en metros a comprar:");
	scanf("%d", &n);
	
	precio = n * 2.76919 * 24.70;
	/*Aquí tuve que buscar el precio del dólar en Google y hacer que los números
	fueran tan exactos como fuera posible, tomando como referencia el precio del
	dólar del día de ayer en la noche.*/
	
	printf("El costo total por la tela es de: %f bolivares\n", precio);
	
	getch();
	
	return(0);
}
