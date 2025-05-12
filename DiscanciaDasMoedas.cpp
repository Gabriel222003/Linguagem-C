#include<stdio.h>
#include<math.h>
#include<string.h>

main(){
	int N;
	int X;
	int Y;
	int R1;
	int R2;
	float perto;
	char resposta [3];
	
	scanf("%d",&N);
	scanf("%d %d",&R1,&R2);
	
	for(int i = 0; i < N;i++){
		int X2;
		int Y2;
		int soma;
		char S [3] ;
		float somastr;
		
		scanf("%s",&S);
		scanf("%d %d",&X,&Y);

		
		X2 = pow(abs(X-R1),2);

		Y2 = pow(abs(Y-R2),2);
		
		soma = X2+Y2;
		
		
		somastr = sqrt(soma);
		
		
		if(i==0)
			perto = somastr;
			
		else
			perto = fmin(perto,somastr);
			
		if(perto==somastr)
			strcpy(resposta,S);
		
	
}
	printf("%s\n",resposta);

}
