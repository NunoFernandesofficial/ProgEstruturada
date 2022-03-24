/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 *Exercicio 3
 ******************************************************/

#include <stdio.h>
#include <locale.h>

#define PI 3.14

int main()
{
    int r;

    printf("Qual o raio do circulo? ");
    scanf("%d", &r);

    printf("O perimetro do circulo é: %.2lf\n", 2 * PI * r);
    printf("A aréa do circulo é: %.1lf\n", PI * r * r);


}