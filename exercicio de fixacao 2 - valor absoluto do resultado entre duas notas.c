#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
void main(){

     //permite usar acentos
    setlocale(LC_ALL,"");

     //Crie um algoritmo que leia 2 nota e mostre o valor absoluto da diferen�a entre elas
    int nota1, nota2;

    printf("Digite a primeira nota:");
    scanf("%d", &nota1);

    printf("Digite a primeira nota:");
    scanf("%d", &nota2);

    printf("\n O valor absoluto da diferen�a entre as duas notas �: %d \n", abs(nota1-nota2));

    //pausando programa ap�s executado
    system("pause");
}
