#include <stdio.h>
#include <locale.h>

// Atividade de Compensa��o das atividades faltantes

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exerc�cio 1 ---------------------------------------------------\n");
	
	/*
	Um aluno de computa��o est� organizando um bol�o de futebol. Segundo 
	suas regras, os apostadores informam o placar do jogo e ganham 10 pontos 
	se acertarem o vencedor ou se foi empate e ganham mais 5 pontos para o 
	placar de cada time que acertarem. Exemplo: se o placar do jogo foi 3x2, 
	s�o 0 pontos se o placar apostado foi 0x1; 5 pontos para os placares 
	apostados 0x2 ou 3x5; 10 pontos para o placar apostado 1x0; ou 20 pontos 
	para o placar exato de 3x2. Fa�a um programa que requisita do usu�rio o 
	placar apostado e depois o placar do jogo e informa quantos	pontos o 
	apostador fez. 
	*/
	/*
	int M, V, m, v, P;
	
	printf("Insira a sua aposta para a partida:\nTime mandante: ");
	scanf("%d", &m);
	printf("Time visitante: ");
	scanf("%d", &v);

	printf("Sua aposta foi: %dx%d.\n\n", m, v);
	
	printf("Agora, insira o resultado da partida:\nTime mandante: ");
	scanf("%d", &M);
	printf("Time visitante: ");
	scanf("%d", &V);

	printf("O resultado foi: %dx%d.\n\n", M, V);
	
	if (M == m && V == v) {
		P = 20;		
	} else if (M == m || V == v) {
		P = 5;
	} else if (M - V == m - v) {
		P = 10;
	} else {
		P = 0;
	}
	
	printf("Voc� ganhou: %d pontos", P);
	*/
	
	printf("\nExerc�cio 2 ---------------------------------------------------\n");
	
	/*
	A empresa XYZ decidiu conceder um aumento de sal�rios a seus funcion�rios 
	de acordo com a tabela abaixo:

	SAL�RIO ATUAL(R$)   |  �NDICE DE AUMENTO 
	0,00 � 400,00 		|		15% 
	401,00 � 700,00 	|		12% 
	701,00 � 1000,00 	|		10% 
	1001,00 � 1800,00 	|		7% 
	1801,00 � 2500,00 	|		4% 
	ACIMA DE 2500,00 	|	SEM AUMENTO
	
	Escrever um algoritmo que l�, para cada funcion�rio, o seu nome e o 
	seu sal�rio atual. Ap�s receber estes dados, o algoritmo calcula o 
	novo sal�rio e escreve na tela as seguintes informa��es: nome do 
	funcion�rio -> % de aumento -> sal�rio atual -> novo sal�rio.
	*/
	/*
	char nome[99];
	float S, N;
	int p;
	
	printf("Escreva o seu nome: ");
	fgets(nome, sizeof(nome), stdin);	
	printf("Informe o seu sal�rio atual: ");
	scanf("%f", &S);
	
	if (S > 0 && S < 401) {
		N = S * 1.15;
		p = 15;
	} else if (S >= 401 && S < 701) {
		N = S * 1.12;
		p = 12;
	} else if (S >= 701 && S < 1001) {
		N = S * 1.10;
		p = 10;
	} else if (S >= 1001 && S < 1800) {
		N = S * 1.07;
		p = 7;
	} else if (S >= 1800 && S <= 2500) {
		N = S * 1.04;
		p = 4;
	} else if (S > 2500) {
		N = S;
		p = 0;
	} else {
		N = 0;
	}
	
	printf("\n Funcion�rio: %s.\nSal�rio atual: %.2f.\n"
	"Porcentagem de aumento: %d%%.\nNovo sal�rio: %.2f.", nome, S, p, N);
*/
	printf("\nExerc�cio 3 ---------------------------------------------------\n");

	/*
	Escreva um programa para ler N (Enquanto o usu�rio desejar) valores 
	fornecidos pelo usu�rio e:
	a-) calcular a m�dia aritm�tica entre eles.
	b-) verificar qual � o maior e menor elemento entre os elementos lidos.
	c-) verificar a qual faixa o elemento pertence.
 		Faixa 1 � Elementos < 0
 		Faixa 2 � Elementos >=0 e < 15
 		Faixa 3 � Elementos >=15 e < 100
 		Faixa 4 � Elementos >= 1000
 		Faixa 5 � Elementos >= 101 e < 1000
 		Contabilizar: 	- O total de elementos por faixa
						- O total da faixa
	e-) verificar quais deles s�o pares ou �mpares
	f-) contabilizar - Total de Pares e o total de �mpares
	
	O programa dever� ser executado enquanto o usu�rio desejar.
	*/
	
	int i, N;
	float lista[99], media, soma;
	
	printf("Quantos n�meros voc� deseja inserir na lista? ");
	scanf("%d", &N);
	
	printf("Insira os n�meros desejados:\n");
	
	for (i = 1; i <= N; i++) {
		printf("%d�: ", i);
		scanf("%d", &lista[i]);
		soma += lista[i];
	}
	
	printf("%f\n", soma);
	media = soma / N;
	
	printf("a) M�dia: %.2f.", media);
	
	// M�dia
	/*
	int media, soma;
	
	for (int i = 0;)
	
	printf("M�dia: ");
	*/
}





