#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 6 de Paradigmas de programaci�n.

int main()
{
	int n;
	float precio;
	
	printf("Introduzca la cantidad de tela en metros a comprar:");
	scanf("%d", &n);
	
	precio = n * 2.76919 * 24.70;
	/*Aqu� tuve que buscar el precio del d�lar en Google y hacer que los n�meros
	fueran tan exactos como fuera posible, tomando como referencia el precio del
	d�lar del d�a de ayer en la noche.*/
	
	printf("El costo total por la tela es de: %f bolivares\n", precio);
	
	getch();
	
	return(0);
}
