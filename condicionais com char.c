#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Definindo Variáveis
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("\n A letra é x.");
    }

    //Código em ASCII
    printf("\n Código da letra x é = %d", letra);

    //Comparando Código ASCII
    if(letra == 120){
         printf("\n Esse código ASCII representa a letra x. \n");
    }

    //Pausa o programa após executar
    system("pause");

}
