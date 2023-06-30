//proyecto do-while
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
 
 using namespace std;
 
 int main ()
 {
 	int n, i = 1, s = 0;
 	cout << "n? "; cin >>n;
 	 do {
	  
	printf("%5d" , i);
	 s += i;
	 i++;
	 }while( i <=n);
	 printf("\nla suma es: %d\n", s);
	 if(n !=0)
	    printf("el promedio es %.2f\n", (double) s / n);
	else
	      printf("el promedio no se puede calcular\n");
	
	 system("pause");
 }
