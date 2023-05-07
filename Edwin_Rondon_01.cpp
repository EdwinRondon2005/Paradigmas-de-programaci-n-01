#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

int main()
{
	int n, kilometros = 24;
	
	printf("Ingresar el numero de horas deseado:");
	scanf("%d", &n);
	
	kilometros = 24 * n;
	
	printf("Los kilometros recorridos por el pez son: %d\n", kilometros);
	
	getch();
	
	return 0;
}
