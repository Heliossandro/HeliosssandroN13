#include<stdio.h>

int main (){
	int k,g,com;
	int c=1;
	
	printf("quanto kgde racao compraste e quantos gramas das aos gatos: ");
	scanf("%i %i",&k,&g);
	com=k*1000;
	do{
		c++;
		com=com-g-g;
	}while(c!=6);
	printf("em 5 dias restara %i de racao",com);
	
}