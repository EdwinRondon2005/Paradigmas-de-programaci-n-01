#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 4 de Paradigmas de programaci�n.

int main()
{
	int n;
	float kilogramos = 0.03;
	
	printf("Introduzca el numero de pasteles que desee preparar:");
	scanf("%d", &n);
	
	kilogramos = n * 0.03;
	
	printf("La cantidad de harina a utilizar es: %f kilogramos\n", kilogramos);
	
	getch();
	
	return(0);
}
