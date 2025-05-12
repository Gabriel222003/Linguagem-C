#include <stdio.h>

main(){
	int lado1;
	int lado2;
	int A;
	int P;
	
	scanf("%d",&lado1);
	scanf("%d",&lado2);
	
	if(lado1 == lado2){
		printf("Quadrado\n");
		P = 4*lado1;
	}else{
		printf("Retangulo\n");
		P = 2*(lado1 + lado2);
	}
	A = lado1*lado2;
	printf("Area:%d\nPerimetro:%d",A ,P);
	
}
