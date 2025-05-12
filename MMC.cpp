#include<stdio.h>

main(){
	int n1;
	int n2;
	int n = 0;
	
	printf("Digite um numero:");
	scanf("%d",&n1);
	printf("Digite um numero:");
	scanf("%d",&n2);
	
	for(int k = 2 ;n==0;k++){
		if(k%n1==0 && k%n2==0){
			n = n + 1;
			printf("O M.M.C de %d e %d: %d ",n1,n2,k);
		}
		
	}
}
