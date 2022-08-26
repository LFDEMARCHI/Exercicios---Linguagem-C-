#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    //permite usar acentos
    setlocale(LC_ALL,"");

    //imprimir olá
    printf("Olá \n");

    //lendo valor inteiro
    int a =  50;
    printf("O valor de a é = %d \n",a);
    scanf("%2d", &a);
    printf("O valor de a mudou para %d \n",a);

    //lendo valor quebrado
    float b =  3.2;
    printf("O valor de b é = %f \n",b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f \n",b);

    //lendo letra
    char letra = 't';
    printf("O valor de c é = %c \n",letra);
    fflush(stdin);
    scanf("%2c", &letra);
    printf("O valor de c mudou para %c \n",letra);

}
