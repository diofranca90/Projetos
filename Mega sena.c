/* Este programa gerar 6 números aleatóros para MegaSena */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main ()
{   // Definição de variáveis
	int num_1, num_2, num_3, num_4, num_5, num_6;
    int num_mega_sena;
 	int cont;
 	
 	// Tela e seleção de valores nas variáveis  
 	printf ("Selecione seus numeros: \n ");
    scanf ("%d" "%d"  "%d"  "%d"  "%d"  "%d", & num_1, & num_2, & num_3, & num_4, & num_5, & num_6);
    
	// Tela          
   	printf ("\n Seus numeros são: %d, %d, %d, %d, %d, %d" , num_1, num_2, num_3, num_4, num_5, num_6);
    
	// Seleção de numeros aleatórios  
    srand (time (NULL));
    
    // Tela seleção de numeros aleatórios
    printf ("\n \n Os numeros sorteados da megasena são: \n");
    
    // Estrutura de repetição
    for (cont = 1; cont <= 6; cont ++)
   {num_mega_sena = 1 + rand()% 61;  // gera um número aleatório de 1 a 60
   
   // Tela
       printf ("%d ", num_mega_sena);
   }
   
   // Pular linha
    printf ("\n");
       
    system ("pause");   
    return  0 ;
		
}
