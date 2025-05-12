//	Atividade 12

#include<stdio.h>

main(){
	float n2;
	float n4;
	float n6;
	float m;
	
	printf("Nota da primeira prova:");
	scanf("%f",&n2);
	printf("Nota da segunda prova:");
	scanf("%f",&n4);
	printf("Nota da terceira prova:");
	scanf("%f",&n6);
	
	m =(n2*2+n4*4+n6*6)/12;
	
	printf("Media:%.1f",m);
}
