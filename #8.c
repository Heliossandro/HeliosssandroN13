#include<stdio.h>

int main (){

    int h;
    float s;
    float sb,im,st,sb2,mt;
    printf("digite as h e o s e o salario bruto: ");
    scanf("%d",&h );
    scanf("%f",&s );
scanf("%f",&sb );

mt=(h*s)/2;
sb2= sb*h;
im=(sb*3)/100;
st=sb2+im-mt;

printf("matade do salario minimo pelas horas trabalhadas : %f\n",mt);
printf("o seu salario bruto pelas horas de trabalho sera: %f \n", sb2);
printf("o impodto no salario bruto é sera: %f \n", im);
printf("o seu salario sera: %f", st);
return 0;
}
    
    