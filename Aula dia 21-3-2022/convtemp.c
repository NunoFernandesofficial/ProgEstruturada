/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 * Exericio 4
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    double f;

    printf("Qual é a temperatura em Fahrenheit? ");
    scanf("%lf", &f);

    printf("A temperatura em graus célsius é: %.2f\n", (f - 32) * 5 / 9 );

}