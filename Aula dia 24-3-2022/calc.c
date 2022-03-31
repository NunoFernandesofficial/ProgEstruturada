/*******************************************************
 *Teste à estrutura básica de um programa
 *
 *Trabalho: Pelab3 Entradas/Saídas, Tipos e Aritmética
 *Curso: CiberSegurança
 *Docente: Carlos limao
 *Autor: Nuno Fernandes 
 *Data: 24/03/2022
 *
 *Exercicio 5
 ******************************************************/

#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "pt-PT");

    int operador, n1, n2;

        do {
            printf("\nCalculadora do Nuno");
            printf("\n1:Soma(+)\n2:Subtração(-)\n3:Multiplicação(*)\n4:Divisão(/)\n0:Sair\n");
            printf("Qual o calculo que quer realizar? ");
            scanf("%d", &operador);

            if (operador > 0 && operador < 5) {
                printf("Digite o primeiro valor: ");
                scanf("%d", &n1);
                printf("Digite o segundo valor: ");
                scanf("%d", &n2);
            }

            switch (operador) {
            case 0:
                printf("A sair...\n");
                break;
            case 1:
                printf("\nSoma: %d\n", n1 + n2);
                break;
            case 2:
                printf("\nSubtração: %d\n", n1 - n2);
                break;
            case 3:
                printf("\nMultiplicação: %d\n", n1 * n2);
                break;
            case 4:
                while (n2 == 0) {
                    printf("Nao existe divisao por zero!\nDigite outro valor: ");
                    scanf("%d", &n2);
                }
                printf("\nDivisão: %d\n", n1 / n2);
                break;
            default:
                printf("A opção selecionada não é permitida, por favor digite outra opção: ");
            }
        } while (operador != 0);

}
