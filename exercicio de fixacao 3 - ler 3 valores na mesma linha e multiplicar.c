#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

//Crie um algo

    int frutas, pessoas, grupos, resultado;

    printf("Escreva quantas frutas por grupo, pessoas por grupo e quantos grupos estiveram naquele local: \n");
    scanf("%d %d %d", &frutas, &pessoas, &grupos);

    printf("Por tanto, foram %d frutas para %d pessoas em cada grupo, sendo %d grupos \n", frutas,pessoas, grupos);

    resultado= frutas*pessoas*grupos;
    printf("Sendo um total de: %d frutas \n", resultado);

    system("pause");

}

