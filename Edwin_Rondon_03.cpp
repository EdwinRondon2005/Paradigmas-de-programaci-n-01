#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 3 de Paradigmas de programaci�n.

int main()
{
	int n, horas = 2;
	float kilometros = 22.5;
	
	printf("Introduzca las horas deseadas:");
	scanf("%d", &n);
	
	kilometros = 22.5 / 2 * n;
	
	printf("El venado recorrio %f kilometros\n", kilometros);
	
	getch();
	
	return (0);
}
