#include<stdio.h>

main(){
	int N;
	int numero;
	float par;
	float impar;
	float Ppar;
	float Pimpar;
	int k;
	
	printf("Numero de repeticao:");
	scanf("%d",&N);
	
	for(k = 1 ;k <= N;k++){
		
		printf("\nDigite um numero:");
		scanf("%d",&numero);
		if(numero%2==0)
			par = par + 1;
		else
			impar = impar + 1;
	}
	
	Ppar = (par/N)*100;
	Pimpar = (impar/N)*100;
	
	printf("\nPar:%.2f%%\n",Ppar);
	printf("Impar:%.2f%%",Pimpar);
	
}
