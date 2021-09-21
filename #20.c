#include<stdio.h>
int main(){
float ac=1.50,aj=1.10;
int c=0;
do{


	ac+=0.02;
	aj+=0.03;
		c ++;
}while(ac>aj);
	
	

printf("e necessario %d anos\n",c);
	return 0;
}
