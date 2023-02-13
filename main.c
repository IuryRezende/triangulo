#include <stdio.h>
#include <stdlib.h>

int main(){
   int num;
   float x;


   printf("Lista de produtos\n");
   printf("1 - OMO R$5,00\n");
   printf("2 - PERFUME R$14,50\n");
   printf("3 - CONTROLE R$7,00\n");
   printf("Digite o número do produto o qual deseja\n");
   scanf("%d", &num);
   switch(num){
       case 1:
            printf("Quantos deseja? \n");
            scanf("%f", &x);
            printf("Valor: R$%.2f", 5.0*x);
       break;
   }








   return 0;
}

