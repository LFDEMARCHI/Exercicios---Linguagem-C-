#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

     //permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo variáveis
    float nota1, nota2, resultado;

    //Lendo o primeiro valor
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    //Lendo o primeiro valor
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    //Calculando e mostrando resultado final
    resultado = (nota1+nota2) /2;
    printf("\n A média entre as duas notas é: %f \n", resultado);

    //pausando programa após executado
    system("pause");
}
