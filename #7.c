#include<Stdio.h>

int main(){

	int pd,vi,pi,ld;
 float c,cf;
 printf("diga o preco do carro: ");
 scanf("%f",&c);
 printf("diga o percentaul que deseja: ");
 scanf("%i",&pd);
 ld=(c*pd)/100;
 printf("diga a percentagem de imposto: ");
 scanf("%i",&pi);
 vi=(c*pi)/100;
 cf=c+ld+vi;
 printf("o seu lucro e %i \n ",ld);
 printf("o valor correspindente aos impostos e %i \n",vi);
 printf("o valor final do carro e %f \n",cf);
 return 0;
}