#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 7 de Paradigmas de programaci�n.

int main()
{
	int n;
	float costo;
	float descuento;
	
	printf("Introduzca el precio:");
	scanf("%d", &n);
	
	descuento = (n * 15) / 100;
	
	costo = n - descuento;
	
	printf("Debido al 15 por ciento de descuento que tenemos actualmente, el costo de la medicina es de %f\n", costo);
	
	getch();
	
	return(0);
}
