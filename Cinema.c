/*  
* Diorgenes França de Olveira
* Stembro/2020

O programa deve apresentar ao usuário as opções de filme e o valor total dos ingressos, 
com custo de 12,50 reais cada. Além disso, o valor do ingresso deve ser facilmente modificado no código.*/

#include <stdio.h>
#include <stdlib.h>

int main() // Inicio
{	// Variavéis
	int filme, ingresso;
	double valor;
	
	// Entrada
	printf("Ola, bem vindo ao catálogo de filmes\n");
	printf("Escolha a opção de filme\n");
	printf("-------Digite 1: Vingadores 4 Marvel------- \n");
	printf("-------Digite 2: Como treinar seu Dragão 3------- \n");
	printf("-------Digite 3: Dumbo------- \n");
	printf("-------Digite 4: Shazam!------- \n");
	scanf("%d", &filme);
	
	printf("Informe a quantidade de ingresso\n");
	scanf("%d", &ingresso);
	
	// Processamento
	valor = ingresso * 12.50;
	
	// Saída
	printf("Obrigrado! Por comprar %d ingressso(s) para o filme número %d você irá gastar %.2f", ingresso, filme, valor);
	
	system("pause");
	return 0;
}
