#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 2 de Paradigmas de programación.

int main()
{
	int n, kilometros = 120, horas = 3;
	
	printf("Ingresar el numero de horas deseado:");
	scanf("%d", &n);
	
	kilometros = 120 / 3 * n;
	
	printf("El pinguino nado: %d kilometros\n", kilometros);
	
	getch();
	
	return (0);
}
