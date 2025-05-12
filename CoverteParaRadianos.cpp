#include<stdio.h>

main(){
	float g;
	float r;
	float pi = 3.1415926535;
	
	printf("Digite o valor em graus:");
	scanf("%f",&g);
	
	r = g*(pi/180);
	
	printf("Conversao para Radianos:%frad",r);
	
}
