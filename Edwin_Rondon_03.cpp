#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

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
