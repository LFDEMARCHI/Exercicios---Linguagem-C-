#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior
    if(a > 2){
        printf("\n %d é maior que 2", a);
    }

    //Maior ou Igual
    if(c >= b){
        printf("\n %d é maior ou igual que %d", c, b);
    }

    //Menor
    if(a < 10){
        printf("\n %d é menor que 10", a);
    }

    //Menor ou igual
    if(a <= 10){
        printf("\n %d é menor ou igual a 10", a);
    }

    //Diferente
    if(c != 10){
        printf("\n %d nao é 10", c);
    }
    if(d != 'a'){
        printf("\n %c nao é a \n", d);
    }

    //Pausa o programa após executar
    system("pause");

}
