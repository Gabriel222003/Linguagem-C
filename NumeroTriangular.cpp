//	Atividade 17

#include<stdio.h>

main(){
	int n;
	int m = 0;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	for(int k = 1;m<n;k++){
		m = k*(k+1)*(k+2);
		printf("oi %d  %d\n",k,m);
	}
	if(m==n)
		printf("%d e um numero triangular",n);
	else
		printf("%d nao e um numero triangular",n);
	
}
