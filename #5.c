#include<Stdio.h>

int main(){
 
 
 int pr;
 float s,sn;
 printf("diga o seu salario: ");
 scanf("%f",&s);
  printf("diga a  percentual de aumento: ");
 scanf("%i",&pr);
 sn=(s*pr)/100;
 
 printf("foi aumentado: %f ",sn);
 return 0;
}