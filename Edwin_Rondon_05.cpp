#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 5 de Paradigmas de programación.

int main()
{
	int n, precio = 8;
	
	printf("Introduzca el numero de panes que desea comprar:");
	scanf("%d", &n);
	
	precio = 8 * n;
	
	printf("El costo total por los panes es de: %d bolivares\n", precio);
	
	getch();
	
	return(0);
}
