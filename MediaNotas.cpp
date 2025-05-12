#include <stdio.h>

main(){
	float n = 0 ;
	float m;
	float b = 0;
	float n1 = 0;
	float nota = 0;
	while(n!=-1){
		scanf("%d",&n);
		nota = n + n1;
		printf("%d",nota);
		n1 = n;
		b++;
	}
	m = nota/b;
	printf("media das notas e: %d",m);
	printf("%d",b);
	printf("%d",nota);
}
	
