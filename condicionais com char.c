#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("\n A letra � x.");
    }

    //C�digo em ASCII
    printf("\n C�digo da letra x � = %d", letra);

    //Comparando C�digo ASCII
    if(letra == 120){
         printf("\n Esse c�digo ASCII representa a letra x. \n");
    }

    //Pausa o programa ap�s executar
    system("pause");

}
