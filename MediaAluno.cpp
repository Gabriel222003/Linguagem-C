#include<stdio.h>

main(){
	int NA;
	int CA = 0;
	int N;
	float M;
	
	scanf("%d",&NA);
	
	do{
		float S = 0;
		float C = 0;
		do{
			scanf("%d",&N);
			S = S+N;
			C = C + 1;	
			
		}while(C!=2);
		M = S/C;
		printf("%.1f\n",M);
		CA = CA + 1;
		
	}while(CA!=NA);
	
	
}
