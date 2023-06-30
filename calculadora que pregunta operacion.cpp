
	#include<stdio.h>
int main()
{
	int tecla;
	float n1, n2, suma;
	
	printf("Dame n1:\n");
		scanf("%f",&n1);
	printf("Dame n2:\n");
		scanf("%f",&n2);
		
	printf("1.-Suma\n");
	printf("2.-Resta\n");
	printf("3.-Division\n");
    printf("4.-Promedio\n");
    printf("5.-Multiplicacion\n");
	scanf("%i",&tecla);
	if(tecla==1)printf("La suma es:%.2f\n",n1+n2);
	if(tecla==2)printf("La resta es:%.2f\n",n1-n2);
	if(tecla==3)printf("la division es:%.2f\n",n1/n2);
	if(tecla==4)printf("el promedio es:%.2f\n",(n1+n2)/2);
	if(tecla==5)printf("la multiplicacion es:%.2f\n",n1*n2);
}
	
	
	

