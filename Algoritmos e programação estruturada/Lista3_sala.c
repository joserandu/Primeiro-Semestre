#include <stdio.h>
#include <string.h>
#include <locale.h>

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
	
	printf("%d", soma);
	
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
	
	for (b = 1; b < 10; b++) {
		printf("%i X %i = %i\n", a, b, a * b);
	}

	printf("Exerc�cio 4 -------------------------------------------------\n\n");

	/*
	Ler um n�mero N qualquer menor ou igual a 50 e exibir o valor obtido da
	multiplica��o sucessiva de N por 3 enquanto o produto for menor que 250 
	(N*3, N*3*3, N*3*3*3, etc.)
	*/
	
	int N, resultado;
	
	printf("Digite um n�mero: ");
	scanf("%i", &N);
	
	resultado = N;
	
	printf("%i", N);
	
	for (; resultado < 250; resultado *= 3) {
		printf("*3");
	}
	
	printf("\nResultado: %i", resultado);
	
	printf("Exerc�cio 5 -------------------------------------------------\n\n");
	
	/*
	Exibir todos os n�meros divis�veis por 4 que sejam menores que 200. Use a
	instru��o Se dentro da malha do programa. A vari�vel Contador dever� iniciar
	com o valor 1.
	*/
	
	int contador;
	
	//printf("1");
	
	for (contador = 2, contador < 200, contador++) {
		if (contador % 4 == 0) {
			printf(" ,%i");
		}
	}
	
	printf(".");
	
	printf("Exerc�cio 6 -------------------------------------------------\n\n");
	
	/*
	Exibir os quadrados dos n�meros inteiros de 15 a 200.
	*/
	
	int a;
	
	for (a = 15; a < 201; a++) {
		printf("%a", a^2);
	}

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

	for (potencia)

}

