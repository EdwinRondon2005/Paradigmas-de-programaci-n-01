#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 9 de Paradigmas de programaci�n.

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
