#include <stdio.h>
#include <locale.h>

int main()
{
    int a,b;

    a = 3;
    b = 2;

     //Ajustar consola para mostrar acentos do Português
    setlocale(LC_CTYPE, "pt-PT");

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

}