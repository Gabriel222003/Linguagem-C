#include<stdio.h>

main(){
	float m;
	float n1;
	float n2;
	int c;
	
	for(c = 1; c <= 2; c++){
		float nota1;
		float nota2;
		
		printf("Prova do %d Bimestre:",c);
		scanf("%f",&nota1);
		printf("Trabalho do %d Bimestre:",c);
		scanf("%f",&nota2);
		
		if (c == 1)
			n1 = nota1+nota2;
		else
			n2 = nota1+nota2;
			
	}
	
	m = (n1+n2)/2;
	
	if(m >= 5)
		printf("Nota:%.1f\nAprovada",m);
	else
		printf("Nota:%.1f\nNao Aprovada",m); 
}
