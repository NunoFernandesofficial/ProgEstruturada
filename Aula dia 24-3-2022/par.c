/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 24/03/2022
 *
 *Exercicio 1
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{

    int a;

    printf("Este programa irá dizer se o número introduzido é par \n");
    printf("Introduza um número inteiro: ");
    scanf("%d", &a);

    if ( a % 2 == 0 ){
        printf("O numero introduzido é par\n");
    } 
    else {
        printf("o numero introduzido é impar\n");
    }
}