#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main(){
	char x[256];
	float piv ,hig_piv,l1,l2,l3;
	char X[20],Y[20],Z[20];
	
	struct ficha{
		int sequencia;
		char nome[256];
		float A;
		float B;
		float C;
		char Resultado[30];
		char maior[10];
	};
	struct ficha tabela;
	float matriz [4][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			float X = atof(gets(x));
			matriz[j][i]= X;
		}
	}
	for(int t = 0; t<3; t++){
		piv = fabs(matriz[0][t]);
		if(piv >= hig_piv)
			hig_piv = piv;
	}
	if (hig_piv == matriz[0][0]){
		l2 =  matriz[0][1]/matriz[0][0];
		for (int i = 0; i<4; i++){
			matriz[i][1] = matriz[i][1]-(l2*matriz[i][0]); 
			}
		l3 =  matriz[0][2]/matriz[0][0];
		for (int i = 0; i<4; i++){
			matriz[i][2] = matriz[i][2]-(l3*matriz[i][0]);
		}
		Z = ((matriz[3][2]*matriz[1][1])-(matriz[3][1]*matriz[1][2]))/(((-1*matriz[2][1])*(matriz[1][2]))+(matriz[2][2]*matriz[1][1]));
		Y = (matriz[3][1]-(Z*matriz[2][1]))/matriz[1][1];
		X = (matriz[3][0]-(Y*matriz[1][0])-(Z*matriz[2][0]))/matriz[0][0];

	}
	else if (hig_piv == matriz[0][1]){
		l2 =  matriz[0][0]/matriz[0][1];
		for (int i = 0; i<4; i++){
			matriz[i][0] = matriz[i][0]-(l2*matriz[i][1]);
		}
		l3 =  matriz[0][2]/matriz[0][1];
		for (int i = 0; i<4; i++){
			matriz[i][2] = matriz[i][2]-(l2*matriz[i][1]);
		}
		Z = ((matriz[3][2]*matriz[1][0])-(matriz[3][0]*matriz[1][2]))/(((-1*matriz[2][0])*(matriz[1][2]))+(matriz[2][2]*matriz[1][0]));
		Y = (matriz[3][0]-(Z*matriz[2][0]))/matriz[1][0];
		X = (matriz[3][1]-(Y*matriz[1][1])-(Z*matriz[2][1]))/matriz[0][1];
	
	}
	else{
		l2 =  matriz[0][0]/matriz[0][2];
		for (int i = 0; i<4; i++){
			matriz[i][0] = matriz[i][0]-(l2*matriz[i][2]); 
			}
		l3 =  matriz[0][1]/matriz[0][2];
		for (int i = 0; i<4; i++){
			matriz[i][1] = matriz[i][1]-(l3*matriz[i][2]);
		}
		Z = ((matriz[3][1]*matriz[1][0])-(matriz[3][0]*matriz[1][1]))/(((-1*matriz[2][0])*(matriz[1][1]))+(matriz[2][1]*matriz[1][0]));
		Y = (matriz[3][0]-(Z*matriz[2][0]))/matriz[1][0];
		X = (matriz[3][2]-(Y*matriz[1][2])-(Z*matriz[2][2]))/matriz[0][2];

	}

	printf("x= %.2f\n", X);
	printf("y= %.2f\n", Y);
	printf("z= %.2f\n", Z);	
}

