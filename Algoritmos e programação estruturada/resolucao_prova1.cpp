#include <stdio.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	// Quest�o 1
	
	int a;
	
	for (a = 1; a <= 20; a++) {
		
		if (a % 2 == 0) {
			if (a == 2) {
				printf("%d ", a);
			}
			;  
		} else if (a % 3 == 0) {
			;
		} else if (a % 5 == 0) {
			;
		} else {
			printf("%d ", a);
		}
		
	}
	
	printf("\n\n----------------------------------------------------------------\n\n");
	
	// Quest�o 2
	
	int b[99];
	int M = 1000000; 
	int i;
	
	printf("Digite n�meros inteiros positivos (um negativo indica o fim da digita��o): ");
		
		for (i = 0; i < 99; i++) {
			
			scanf("%d", &b[i]);
			
			if (b[i] >= 0) {
				
				if (b[i] % 2 != 0) {
					if (b[i] < M) {
						M = b[i];
					}
				}
			} else {
				break;
			}
		}

	printf(" -> FIM. O menor dos n�meros �mpares digitados � %d", M );
	
	printf("\n\n----------------------------------------------------------------\n\n");
	
	// Quest�o 3
	
	int C;
	
	printf("Em qual condi��o voc� se enquadra: \n1 - Estudante. \n2 - Possui mais de 60 anos de idade. \n3 - Professor(a) de escola p�blica. \n4 - Profissional da educa��o. \n5 - Portadores de defici�ncia. \n6 - Nenhuma das alternativas.\nResposta: ");
	scanf("%d", &C);
	
	switch (C) {
		case 1: printf("Deferido");
			break;
		case 2: printf("Deferido");
			break;
		case 3: printf("Deferido");
			break;
		case 4: printf("Deferido");
			break;
		case 5: printf("Deferido");
			break;
		case 6: printf("Indeferido");
			break;
		default:
			printf("Digite um c�digo v�lido.");
			break;
	}

}

