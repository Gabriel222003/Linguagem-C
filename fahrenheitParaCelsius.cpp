#include <stdio.h>

main(){
	float C;
	float F;

	
	printf("Valor em Celsius:");
	scanf("%f",&C);
	F = (9.0/5.0)*C + 32;
	printf("Celsius:%.2fC\nPARA\nFahrenheit:%.2fF ",C,F);
}
