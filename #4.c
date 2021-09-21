#include<Stdio.h>

int main(){

 float s,sn,sau;
 printf("diga o seu salario\n");
 scanf("%f",&s);
 sn=(s*25)/100;
 sau=sn+s;
 printf("o seu salario com aumento de 25 e %f ",sau);
 return 0;
}