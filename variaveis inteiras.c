#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o principal do programa
void main(){

    //permite usar acentos
    setlocale(LC_ALL,"");

    //Defiindo uma vari�vel "a"
    int a=5, b;

    //Imprindo a vari�vel inteira "a"
    printf("%d", a);

    //Concatenando
    printf ("\n O valor da var a �: %d", a);

    //Mudando o valor de "a"
    a=15;

    //Concatenando
    printf ("\n O valor da var a �: %d", a);

    //Lendo valores
    scanf("%d", &b);

    //Concatenando
    printf ("\n O valor da var b �: %d", b);

    //imprime na tela
    printf("\n IHAAAA \n");

    //pausa o programa ap�s executar
    system("pause");

}
