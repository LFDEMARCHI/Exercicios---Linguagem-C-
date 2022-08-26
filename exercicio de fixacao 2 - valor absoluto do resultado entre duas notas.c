#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

     //permite usar acentos
    setlocale(LC_ALL,"");

     //Crie um algoritmo que leia 2 nota e mostre o valor absoluto da diferença entre elas
    int nota1, nota2;

    printf("Digite a primeira nota:");
    scanf("%d", &nota1);

    printf("Digite a primeira nota:");
    scanf("%d", &nota2);

    printf("\n O valor absoluto da diferença entre as duas notas é: %d \n", abs(nota1-nota2));

    //pausando programa após executado
    system("pause");
}
