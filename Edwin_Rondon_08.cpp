#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 8 de Paradigmas de programación.

int main()
{
	float mil, cen, dec, met, Dec, Hec, Kil;
	
	printf("Introduzca la cantidad en metros:");
	scanf("%f", &met);
	
	mil = met * 10 * 10 * 10;
	cen = met * 10 * 10;
	dec = met * 10;
	Dec = met / 10;
	Hec = met / 10 / 10;
	Kil = met / 10 / 10 / 10;
	
	printf("La cantidad en milimetros es: %f\n", mil);
	printf("La cantidad en centimetros es: %f\n", cen);
	printf("La cantidad en decimetros es: %f\n", dec);
	printf("La cantidad en decametros es: %f\n", Dec);
	printf("La cantidad en hectometros es %f\n", Hec);
	printf("La cantidad en kilometros es: %f\n", Kil);
	
	getch();
	
	return(0);
}
