#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 9 de Paradigmas de programación.

int main()
{
	char x, z;
	x = ' ';
	z = '*';
	
	printf("%c%c%c%c%c%c%c\n", x, x, x, x, x, x, x);
	printf("%c%c%c%c%c%c%c\n", z, z, z, z, z, z, z);
	printf("%c%c%c%c%c%c%c\n", z, x, x, x, x, x, x);
	printf("%c%c%c%c%c%c%c\n", z, x, x, x, x, x, x);
	printf("%c%c%c%c%c%c%c\n", z, z, z, z, z, z, z);
	printf("%c%c%c%c%c%c%c\n", z, x, x, x, x, x, x);
	printf("%c%c%c%c%c%c%c\n", z, x, x, x, x, x, x);
	printf("%c%c%c%c%c%c%c\n", z, z, z, z, z, z, z);
	
	getch();
	
	return(0);
}
