#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 2 de Paradigmas de programaci�n.

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
