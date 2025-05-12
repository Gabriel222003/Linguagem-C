#include<stdio.h>

main(){
	int x;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	
	printf("Numero:");
	scanf("%d",&x);
	if(x%2==1){
		n1 = (x/3)-2;
		n2 = x/3;
		n3 = (x/3)+2;
	}
	else
		x = 0;
	printf("Os numeros sao:%d + %d + %d = %d",n1,n2,n3,x);
}
