#include<stdio.h>
#include<string.h>
int main (){
char nm[40];
float i,n,lc;
float tx;
printf("Diz o seu nome: ");
	scanf("%s ",&nm);
 	printf("quantos dias ficou no hotel: ");
	scanf("%f ",&n)
	if(n<15){
	lc=n*4;
	tx=50+lc;
	}
	if(n==15){
	lc=n*3.60;
	tx=50+lc;
	}
	if(n>15){
	lc=n*3;
	tx=50+lc;
	}

		
	printf("o nome e %s \n",nm);
		printf("pagou %f \n",tx);
		printf("o lucro e de %f \n",lc);
	return 0;
}