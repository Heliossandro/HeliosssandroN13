#include<stdio.h>
#include<stdlib.h>
int main(){
int n,fi=0,fi2=1,fi3;
scanf("%i",&n);
if(n < 0){
	printf("numero invalido");
}else{
while(fi2 < n){
	fi3 = fi2+fi;
	printf(" %i ", fi3);
	fi=fi2;
	fi2=fi3;	
}
}
	
	

printf("\n");
	return 0;
}