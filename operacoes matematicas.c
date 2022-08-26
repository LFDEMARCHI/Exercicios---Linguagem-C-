#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

     //permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo variáveis inteiras
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d", a, b, a+b);

    //Subtração
    printf("\n A subtração de %d e %d = %d", a, b, a-b);

    //Divisão
    printf("\n A divisão de %d e %d = %d", a, b, a/b);

    //Multiplicação
    printf("\n A multiplicação de %d e %d = %d", a, b, a*b);

    //O resto da divisão
    printf("\n O resto da divisão entre %d e %d = %d", a, b, a % b);

    //O valor absoluto
    printf("\n O valor absoluto de -3 = %d \n", abs(-3));

    //Pausa o programa após executar
    system("pause");


    }
