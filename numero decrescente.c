#include<stdio.h>

int main (){

    int n1,n2,n3;
    printf("digite os 3 numeros: ");
    scanf("%d",&n1 );
    scanf("%d",&n2 );
    scanf(" %id",&n3 );
    
         if ((n1>n2)&&(n1>n3)){
             if(n2>n3){
            printf ("%i %i %i \n", n1, n2, n3);
        }
        }
         if ((n2>n3)&&(n2>n1)){
             if(n1>n3){
            printf ("%i %i %i \n", n2, n1, n3);
             }
        }
         if ((n3>n2)&&(n3>n1)){
             if(n2>n1){
            printf ("%i %i %i \n", n3, n2, n1);
             }
        }
        if ((n3>n2)&&(n1>n2)){
              if(n3>n1){
            printf ("%i %i %i \n", n3, n1, n2);
              }     
        }
         if ((n2>n1)&&(n1>n3)){
              if(n2>n3){
            printf ("%i %i %i \n", n2, n1, n3);
              }
        }
         if ((n1>n2)&&(n3>n2)){
              if(n1>n3){
            printf ("%i %i %i \n", n1, n3, n2);
              } 
        }
   return 0; 
}