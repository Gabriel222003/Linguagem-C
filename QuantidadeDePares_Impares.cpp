//	Atividade 18

#include<stdio.h>

main(){
	int n=0;
	int par = 0;
	int impar = 0;
	
	do{
		printf("Digite um numero(parar digite -1):");
		scanf("%d",&n);
		
		if(n!= -1 && n%2==0)
			par = par + 1;
		else if(n!=-1)
			impar = impar + 1;
	}while(n!=-1);
	
	printf("Quantidade de pares:%d\n",par);
	printf("Quantidade de impares:%d",impar);
	
}
