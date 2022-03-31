/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 24/03/2022
 *
 *Exercicio 2
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    int a;

    printf("Introduza um número inteiro: ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 4 == 0){
        printf("O número é divisivel por 3 e 4.\n");
    }
    else if (a % 3 == 0 ) {
        printf("O numero é divisivel por 3.\n");
    }
    else if (a % 4 == 0 ) {
        printf("O numero é divisivel por 4.\n");
    }
    else if (a % 3 != 0 || a % 4 != 0 ) {
        printf("O numero não é nem divisivel por 3 nem por 4.\n");
    }

}
