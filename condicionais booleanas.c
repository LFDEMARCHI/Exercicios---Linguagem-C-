#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

    setlocale(LC_ALL,"");

    //Definindo Variáveis
   bool a = true, b = false;

   //Se A for verdadeiro
   if(a){
        printf("\n A é verdadeiro");
   }

   //Comparando o B
   if(b){
     printf("\n B é verdadeiro");
   }else{
     printf("\n B é falso");
   }

   //Comprando uma falsidade
   if(!b){
     printf("\n B é falso \n");
   }

    //Pausa o programa após executar
    system("pause");

}
