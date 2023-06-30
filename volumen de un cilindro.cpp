#include <stdio.h>
#include <conio.h>

#define PI 3.141592

int main()
{
	float radio,area,altura,volumen;
	printf("\n\t\tprograma que calcula el volumen de un cilindro");
	printf("\n\nIngrese el valor del radio del circulo base");
	scanf("%f", &radio);
	printf("\n\nIngrese el valor de la altura del circulo");
	scanf("%f", &altura);
	
	area=PI*radio*radio;
	volumen=area*altura;
	
	printf("\n\nEl area del circulo base es: %.2f unidades cuadradas", area);
	printf("\n\nEl volumen del cilindro es: %.2f unidades cubicas", volumen);
	
	printf("\n\n\nPresione una tecla para continuar");
	getch();
	
}
