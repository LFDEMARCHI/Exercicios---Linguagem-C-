#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
void main(){

     //permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo vari�veis
    float nota1, nota2, resultado;

    //Lendo o primeiro valor
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    //Lendo o primeiro valor
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    //Calculando e mostrando resultado final
    resultado = (nota1+nota2) /2;
    printf("\n A m�dia entre as duas notas �: %f \n", resultado);

    //pausando programa ap�s executado
    system("pause");
}
