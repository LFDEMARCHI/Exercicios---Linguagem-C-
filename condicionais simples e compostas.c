#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    // Definindo variáveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    // Condicionais Simples
    if (a == 5){
        printf("\n A variável a=5");
    }
    if (b == 2.5){
        printf("\n A variável b=2.5");
    }
    if (c == 'x'){
        printf("\n A variável c=letra x");
    }

    // Número par ou impar
    if (a % 2 == 1){
        printf("\n A variável a é impar");
    }else{
        printf("\n A variável a é par");
    }

    //Condicional Composta
    if (opcao ==1){
        printf("\n A opção é =1");
    }else if(opcao ==2){
        printf("\n A opção é =2");
    }else{
        printf("\n A opção não é igual 1 e nem a 2 \n");
    }

    //Pause o programa após executar
    system ("pause");

}

