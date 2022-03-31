/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 24/03/2022
 *
 *Exercicio 3
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    float x, y;

    printf("Este programa irá mostrar o quadrante/eixo em que estão as coordenadas\n");
    printf("Introduza a coordenada X: ");
    scanf("%2f", &x);
    printf("Introduza a coordenada Y: ");
    scanf("%2f", &y);

    if (x > 0 && y > 0) {
        printf("Está no primeiro quadrante.\n");
    }
    else if (x > 0 && y < 0) {
        printf("Está no segundo quadrante.\n");
    }
    else if (x < 0 && y > 0) {
        printf("Está no terceiro quadrante.\n");
    }
    else if (x < 0 && y < 0) {
        printf("Está no quarto quadrante.\n");
    }
    else if (x == 0 && y < 0) {
        printf("Está no eixo inferior.\n");
    }
    else if (x == 0 && y > 0) {
        printf("Está no eixo superior.\n");
    }
    else if (x == 0 && y == 0) {
        printf("Não pertence ao eixo superior ou inferior ou a algum quadrante, pois está no ponto 0.0\n");
    }
    
    
}