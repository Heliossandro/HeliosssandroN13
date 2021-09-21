#include<Stdio.h>

int main(){
 
 
 int pr,pr2;
 float esp,prc;
 printf("Quanto custou o espetaculo: ");
 scanf("%f",&esp);
  printf("Quanto custou o convite: ");
 scanf("%f",&prc);
 pr=esp/prc;
 pr2=pr+1;
 
 printf("vai ser nesseçario vender : %i ",pr2);
 return 0;
}