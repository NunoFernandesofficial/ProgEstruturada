

/*
*  Tipo de variáveis em C:
*  int (16bits)
*  short (32bits)  
*  long (32bits)     
*  float (6bits)
*  double (15bits)  
*  char 
*/


//Como funcionam Variáveis



#include <stdio.h>
#include <locale.h>

int main ()
{
    int primeiroInteiro;
    int segundoInteiro;
    double real;
    float realPequeno;
    char ch;

    //Ajustar consola para mostrar acentos do Português
    setlocale(LC_CTYPE, "pt-PT");
    
    primeiroInteiro = 33;
    segundoInteiro = 44;
    real = 43.97;
    realPequeno = 21.65;
    ch = 'N';

    printf("O primeiro inteiro é %6d \n", primeiroInteiro ); //6d dá espaço
    printf("O segundo inteiro é %d \n", segundoInteiro);
    printf("O valor real é %lf \n", real);
    printf("o valor do real pequeno é %.2f\n", realPequeno);
    printf("o char é %c", ch);
}



