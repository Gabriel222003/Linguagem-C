#include <stdio.h>

main(){
	int f;
	int ant;
	int nov = 0;
	scanf("%d",&f);
	ant = f;
	while(ant!=0){
		ant--;
		nov = ant*f;
		f = nov;
		if (ant == 1)
			printf("%d", nov);
	}
	
}
