/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 *Exercicio 7
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    int s,r;

    printf("Desde o inicio do dia quantos segundos passaram? ");
    scanf("%d",&s);

    r = s % 3600; 

    printf("As horas são: %dh:%dm:%ds\n", s / 3600, r / 60, r % 60);


}