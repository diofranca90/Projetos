/*Criando um jogo que funciona da seguinte forma: o usuário digita um número, 
e o computador irá mostrar o antecessor e o sucessor, a tabuada de multiplicação desse número e em seguida, os três próximos números com contagem de dois em dois.
Código abaixo */

// Diorgenes França de Oliveira, Setembro/2020

# include<stdio.h> // incluindo uma biblioteca padrão: entrada e saída
# include<stdlib.h> // para comando system("pause")

int main()
{
    int x;

    printf("\n====================ANTECESSOR, SUCESSOR, TABUADA E CONTAGEM DE 2 EM 2====================\n");

    printf("\nDigite um numero inteiro.: ");
    scanf("%d", &x);

    printf("\nANTECESSOR E SUCESSOR:\n");
    printf("\nAntecessor de %d = %d", x, (x-1));
    printf("\nSucessor   de %d = %d\n\n", x, (x+1));
 printf("\nTABUADA:\n");

    printf("\nTabuada de %d x 1 = %d \n", x, (x*1));
    printf("\nTabuada de %d x 2 = %d \n", x, (x*2));
    printf("\nTabuada de %d x 3 = %d \n", x, (x*3));
    printf("\nTabuada de %d x 4 = %d \n", x, (x*4));
    printf("\nTabuada de %d x 5 = %d \n", x, (x*5));
    printf("\nTabuada de %d x 6 = %d \n", x, (x*6));
    printf("\nTabuada de %d x 7 = %d \n", x, (x*7));
    printf("\nTabuada de %d x 8 = %d \n", x, (x*8));
    printf("\nTabuada de %d x 9 = %d \n", x, (x*9));
    printf("\nTabuada de %d x 10 = %d \n\n", x, (x*10));

    printf("\nCONTAGEM DO NUMERO ESCOLHIDO DE 2 EM 2:\n");

    printf("\n %d = %d, %d, %d \n", x, (x+2), (x+4), (x+6)); 

system("pause");
    return(0);

}

