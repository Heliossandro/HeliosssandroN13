#include<Stdio.h>

int main(){

 float s,sm;
 int sg;
 printf("diga o seu salario\n");
 scanf("%f",&s);
 printf("diga o salario minimo\n");
 scanf("%f",&sm);
 sg=s/sm;
 printf("vc ganha %i vezes um salario minimo ",sg);
 return 0;
}