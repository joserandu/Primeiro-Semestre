#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exerc�cio 1 -------------------------------------------------\n\n");
	
	/*
	- Exibir todos os valores num�ricos inteiros �mpares situados na faixa de 
	0 a 20. Para verificar se o n�mero � �mpar, efetuar dentro da malha a 
	verifica��o l�gica dessa condi��o com a instru��o SE, perguntando se o 
	n�mero � �mpar, sendo, exiba-o, n�o sendo, passe para o pr�ximo passo.
	*/
	
	int numero;
	
	for (numero = 1; numero < 20; numero++) {
		if (numero % 2 != 0) {
			printf("%i \n", numero);
		}
	}
	
	printf("\n");
	
	printf("Exerc�cio 2 -------------------------------------------------\n\n");
	
	/*
	Exibir o total da soma obtido dos cem primeiros n�meros inteiros
	(1+2+3+4+5+.....+97+98+99+100).
	*/
	
	int number, soma;
	
	soma = 0;
	
	for (number = 1; number < 101; number++) {
		soma = soma + number;
	}
	
	printf("%d\n\n", soma);
	
	printf("Exerc�cio 3 -------------------------------------------------\n\n");
	
	/*
	Exibir os resultados de uma tabuada de um n�mero qualquer. Essa dever�
	ser impressa no seguinte formato:
	2 X 1 = 2
	2 X 2 = 4
	(...)
	2 X 10 = 20
	*/
	
	int a, b;
	
	printf("Digite um n�mero para ver a sua tabuada: ");
	scanf("%i", &a);
	
	for (b = 1; b < 11; b++) {
		printf("%i X %i = %i\n", a, b, a * b);
	}
	
	printf("\n");

	printf("Exerc�cio 4 -------------------------------------------------\n\n");

	/*
	Ler um n�mero N qualquer menor ou igual a 50 e exibir o valor obtido da
	multiplica��o sucessiva de N por 3 enquanto o produto for menor que 250 
	(N*3, N*3*3, N*3*3*3, etc.)
	*/
	
	int N, produto;
	
	printf("Digite um n�mero: ");
	scanf("%i", &N);
	
	if (N < 50) {
		for (produto = N; produto < 250; produto *= 3) {
			printf("%i*k", N);
		}
	}
	
	
	/*
	for (produto = N; produto < 250; N * 3) {
		printf("*3");		
	}
	*/
	
	/*
	while (produto < 250) {
		produto = N * 3;
		printf("*3");		
	}
	*/
	
	printf(" = %i\n\n", produto);
	
	printf("Exerc�cio 5 -------------------------------------------------\n\n");
	
	/*
	Exibir todos os n�meros divis�veis por 4 que sejam menores que 200. Use a
	instru��o Se dentro da malha do programa. A vari�vel Contador dever� iniciar
	com o valor 1.
	*/
	
	int contador;
	
	printf("1");
	
	for (contador = 2; contador < 200; contador++) {
		if (contador % 4 == 0) {
			printf(", %i", contador);
		}
	}
	
	printf(".\n\n");
	
	printf("Exerc�cio 6 -------------------------------------------------\n\n");
	
	/*
	Exibir os quadrados dos n�meros inteiros de 15 a 200.
	*/
	
	int a2;
	
	for (a2 = 15; a2 < 201; a2++) {
		printf("%a", a^2);
	}
	
	printf("\n\n");

	printf("Exerc�cio 7 -------------------------------------------------\n\n");
	
	/*
	Exibir as potencias e 3 variando de 0 a 15. Deve ser considerado que
	qualquer n�mero elevado a zero � 1 e elevado a 1 � ele mesmo.
	3 elevado a 0 = 1
	3 elevado a 1 = 3
	(...)
	3 elevado a 15 = 14348907
	*/
	
	int potencia;

	for (potencia = 0; potencia < 15; potencia++) {
		printf("3 elevado a %i = %i\n", potencia, 3 ^ potencia);
	}

	printf("\n");
	
	printf("Exerc�cio 8 -------------------------------------------------\n\n");

	/*
	Crie um programa que exiba a s�rie de Fibonacci at� o d�cimo quinto
	termo. A s�rie de Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21,
	34....etc. Essa s�rie se caracteriza pela soma de um termo posterior com seu
	anterior subseq�ente.
	*/

	int A1, A2, A3;
	
	for (A1 = 1; A1 < 16; A1++) {
		A3 = A1 + A2;
		printf(" ,%i", A3);
	}

}

