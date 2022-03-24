/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 21/03/2022
 *
 *Exercicio 2 
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    int a,b;

    //Ajustar consola para mostrar acentos do Português
    setlocale(LC_CTYPE, "pt-PT");

    printf("Introduza o primeiro número: ");
    scanf("%d", &a);

    printf("Introduza o segundo número: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

}