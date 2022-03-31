/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 24/03/2022
 *
 *Exercicio 4
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
 
 int a;

 printf("Este programa irá dizer através do ph dado, qual o ponto da solução.\n");
 printf("Qual é o ph da solução? ");
 scanf("%d", &a);

 if (a > 7) {
        if (a > 12){
         printf("Muito alcalino\n");
        }
        else  {
         printf("Alcalino\n");
        }
        }
else if (a == 7){
    printf("Neutro\n");
}
else if (a > 2){
        printf("Muito Acido\n");
    }
    else {
        printf("Acido\n");
    }  
}

