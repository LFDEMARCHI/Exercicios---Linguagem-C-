#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    // Definindo vari�veis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    // Condicionais Simples
    if (a == 5){
        printf("\n A vari�vel a=5");
    }
    if (b == 2.5){
        printf("\n A vari�vel b=2.5");
    }
    if (c == 'x'){
        printf("\n A vari�vel c=letra x");
    }

    // N�mero par ou impar
    if (a % 2 == 1){
        printf("\n A vari�vel a � impar");
    }else{
        printf("\n A vari�vel a � par");
    }

    //Condicional Composta
    if (opcao ==1){
        printf("\n A op��o � =1");
    }else if(opcao ==2){
        printf("\n A op��o � =2");
    }else{
        printf("\n A op��o n�o � igual 1 e nem a 2 \n");
    }

    //Pause o programa ap�s executar
    system ("pause");

}

