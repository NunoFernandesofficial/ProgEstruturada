/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 *Exercicio 6
 ******************************************************/

#include <stdio.h>

#define MINUTOS_NUMA_HORA 60

int main()
{
    double horaReal;
    int hora;
    int minutos;

    printf("Introduza número de horas (real): ");
    scanf("%lf", &horaReal);
    hora = (int)horaReal;
    minutos = (int)((horaReal - hora) * MINUTOS_NUMA_HORA);

    printf("%.2lf horas são %d horas e %d minutos. \n",horaReal,hora,minutos);




}