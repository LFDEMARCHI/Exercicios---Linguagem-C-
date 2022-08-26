#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do programa
void main(){

    //permite usar acentos
    setlocale(LC_ALL,"");

    //Defiindo uma variável "a"
    int a=5, b;

    //Imprindo a variável inteira "a"
    printf("%d", a);

    //Concatenando
    printf ("\n O valor da var a é: %d", a);

    //Mudando o valor de "a"
    a=15;

    //Concatenando
    printf ("\n O valor da var a é: %d", a);

    //Lendo valores
    scanf("%d", &b);

    //Concatenando
    printf ("\n O valor da var b é: %d", b);

    //imprime na tela
    printf("\n IHAAAA \n");

    //pausa o programa após executar
    system("pause");

}
