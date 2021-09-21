#include<Stdio.h>

int main(){

 int an,at,id,a2050;
 printf("diga o seu ano de nascimento: ");
 scanf("%i",&an);
 printf("diga o ano atual: ");
 scanf("%i",&at);
 id= at-an;
 printf("a sua idade é: %i \n",id);
 a2050= 2050-an;
 printf("a sua idade em 2050 sera : %i",a2050);
 return 0;
}