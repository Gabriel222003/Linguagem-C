//	Atividade 19

#include<stdio.h>

main(){
	int l1;
	int l2;
	int l3;
	
	scanf("%d",&l1);
	scanf("%d",&l2);
	scanf("%d",&l3);
	
	if(l1!=0 && l2!=0 && l3!=0){
		if(l1==l2 && l1==l3 && l2==l3)
			printf("Triangulo equilatero");
		else if(l1!=l2 && l1!=l3 && l2!=l3)
			printf("Triangulo escaleno");
		else
			printf("Triangulo isosceles");
	}
	else
		printf("Nao e um triangulo");
		
}
