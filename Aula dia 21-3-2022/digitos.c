/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 *Exercicio 8
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    int a;

    printf("Qual o número de três digitos que quer separar? ");
    scanf("%d",&a);

    printf("Os digitos de %d são %d-%d-%d \n",a,a/100,a/10%10,a%10);
}