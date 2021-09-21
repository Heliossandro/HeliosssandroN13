#include<stdio.h>
#include<math.h>
int main (){
	float x,x1,a,b,c,del;

	
	printf("digite os valores da a b c: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0){
	del=(-b*-b)-4*a*c;
	if (del ==0){
		
		x= (-b+ sqrt(del))/(2*a);
		printf("valor de delta e %f, x= %f,x1= %f  ",del,x,x);
	}else{
		if(del>0){
		x= (-b+ sqrt(del))/(2*a);
		x1= (-b- sqrt(del))/(2*a);
			printf("valor de delta e %f, x= %f,x1= %f  ",del,x,x1);
		}else{
				printf("delta e menor que 0");
		}
	}
	}else{
		if (del<0){
		printf("nao e eq do segundo grau");
	}
	}



	
}