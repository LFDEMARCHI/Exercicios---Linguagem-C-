#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
void main(){

     //permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo vari�veis inteiras
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d", a, b, a+b);

    //Subtra��o
    printf("\n A subtra��o de %d e %d = %d", a, b, a-b);

    //Divis�o
    printf("\n A divis�o de %d e %d = %d", a, b, a/b);

    //Multiplica��o
    printf("\n A multiplica��o de %d e %d = %d", a, b, a*b);

    //O resto da divis�o
    printf("\n O resto da divis�o entre %d e %d = %d", a, b, a % b);

    //O valor absoluto
    printf("\n O valor absoluto de -3 = %d \n", abs(-3));

    //Pausa o programa ap�s executar
    system("pause");


    }
