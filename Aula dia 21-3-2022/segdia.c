/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 *Exercicio 5
 ******************************************************/

#include <stdio.h>
#include <locale.h>

#define HORAS_EM_SEGUNDOS 3600
#define MINUTOS_EM_SEGUNDOS 60


int main()
{
    int a,b,c;

    printf("Este programa converte um horário com o formato HH:MM:SS em segundos,\n");
    printf("Quais são as horas que quer converter no formato HH:MM:SS? ");
    scanf("%d:%d:%d",&a,&b,&c);

   
    printf("O horário dado em segundos é: %d segundos\n", (a * HORAS_EM_SEGUNDOS) + (b * MINUTOS_EM_SEGUNDOS) + c);






    
}