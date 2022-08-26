#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    float nota1,nota2,nota3,resultado;

    printf("Digite as 3 notas da sua matéria:");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    resultado= (nota1+nota2+nota3)/3;
    printf("A média entre as suas notas é %.2f", resultado);

    if(resultado >= 7){
         printf("\n O aluno está aprovado");
    }else{
         printf("\n O aluno está reprovado \n");
    }

    system("pause");

}
