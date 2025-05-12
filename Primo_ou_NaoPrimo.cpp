#include <stdio.h>

main(){
	int n;
	int m = 0;
	int c;
	printf("Digite um numero interio positivo: ");
	scanf("%d", &n);
	for(c=2;c<n;c++){
		if(n%c==0){
			m++;
		}
	}
	if(m == 0){
		printf("%d e um numero primo", n);
	}else
	 	printf("%d nao e primo", n);
}
