#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior
    if(a > 2){
        printf("\n %d � maior que 2", a);
    }

    //Maior ou Igual
    if(c >= b){
        printf("\n %d � maior ou igual que %d", c, b);
    }

    //Menor
    if(a < 10){
        printf("\n %d � menor que 10", a);
    }

    //Menor ou igual
    if(a <= 10){
        printf("\n %d � menor ou igual a 10", a);
    }

    //Diferente
    if(c != 10){
        printf("\n %d nao � 10", c);
    }
    if(d != 'a'){
        printf("\n %c nao � a \n", d);
    }

    //Pausa o programa ap�s executar
    system("pause");

}
