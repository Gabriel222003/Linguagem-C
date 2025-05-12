#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

main(){
int a = 50;
int *prt = &a;
printf("Valor de (a)= (%d)\n",a);
printf("Valor de (a) acessando o ponteiro = (%d)\n",*prt);
printf("Valor de (prt) = (%p) \n",prt);
}
