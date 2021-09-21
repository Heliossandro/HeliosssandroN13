#include<stdio.h>
#include<stdlib.h>
int main (){
	int i,n2=1,n;

 printf("diga o numero: ");
	scanf("%i ",&n);
 for(i=n;i>=1;i--){
	prinft("%i x",i);
	n2*=i;
	
}
printf("= %i", n2);
return 0;
}