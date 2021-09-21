#include<stdio.h>

int main (){
	int n,i,c,c1;
	int m=0,m1=0;

 for(i=0;i!=10;i++){
	printf("dige um numero: ");
	scanf("%i ",&n);
	if(n%2==0){
	c++;
	}else{
	c1++;
	}
	}
		m=10/c;
		m1=10/c1;
	printf("a media dos numeros pares e %i, dos impares %i",m,m1);
	
	
}