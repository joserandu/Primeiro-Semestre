#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
		printf("\nLISTA 3 DE EXERC�CIOS EXECUTADOS EM SALA DE AULA\n\n");

	
	printf("Exerc�cio 1 -------------------------------------------\n\n");
	
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
	
	printf("Exerc�cio 2 -------------------------------------------\n\n");
	
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
	
	printf("Exerc�cio 3 -------------------------------------------\n\n");
	
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

	printf("Exerc�cio 4 -------------------------------------------\n\n");

	/*
	Ler um n�mero N qualquer menor ou igual a 50 e exibir o valor obtido da
	multiplica��o sucessiva de N por 3 enquanto o produto for menor que 250 
	(N*3, N*3*3, N*3*3*3, etc.)
	*/
	
    int N, produto, X;
    
    printf("Digite um n�mero: ");
    scanf("%i", &N);
    
    X = 1;
    
    printf("%i*3", N);
    
    if (N < 50) {
    	for (produto = N * 3; produto < 250 / 3; X++) {
			printf("*3");		
			produto *= X;
		}
	} else {
		printf("N�mero Inv�lido.");
	}
	
	printf(" = %i\n\n", produto);
	
	printf("Exerc�cio 5 -------------------------------------------\n\n");
	
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
	
	printf("Exerc�cio 6 -------------------------------------------\n\n");
	
	/*
	Exibir os quadrados dos n�meros inteiros de 15 a 200.
	*/
	
	int a2;
	
	for (a2 = 15; a2 < 201; a2++) {
		printf("%i ", a2 * a2);
	}
	
	printf("\n\n");

	printf("Exerc�cio 7 -------------------------------------------\n\n");
	
	/*
	Exibir as potencias e 3 variando de 0 a 15. Deve ser considerado que
	qualquer n�mero elevado a zero � 1 e elevado a 1 � ele mesmo.
	3 elevado a 0 = 1
	3 elevado a 1 = 3
	(...)
	3 elevado a 15 = 14348907
	*/
	
	int potencia, produto2;

	potencia = 1;
		
		for (produto2 = 1, potencia = 0; potencia < 16 ; produto2 = produto2 * 3, potencia++) {
			printf("3 elevado a %i = %i\n", potencia, produto2);
		}
		
	printf("\n");
	
	printf("Exerc�cio 8 -------------------------------------------\n\n");

	/*
	Crie um programa que exiba a s�rie de Fibonacci at� o d�cimo quinto
	termo. A s�rie de Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21,
	34....etc. Essa s�rie se caracteriza pela soma de um termo posterior com seu
	anterior subseq�ente.
	*/

	int A, B, C, P;
	
	A = 0;
	B = 1;
	
	for (P = 1; P < 16; P++) {
		C = A + B;
		printf("%i ", A);
		A = B;
		B = C;
	}
	
	printf("\n\nExerc�cio 9 -------------------------------------------\n\n");

	/*
	Crie um programa que apresente o valor de uma pot�ncia de uma base
	qualquer elevada a um expoente qualquer, ou seja, de N elevado a M.
	*/
	
	int n, m, m2, valor;
	
	printf("Digite o valor da base: ");
	scanf("%i", &n);
	
	printf("Digite o valor da pot�ncia: ");
	scanf("%i", &m);
	
	valor = 1;
	
	for (m2 = 1; m2 <= m; m2++) {
		valor = valor * n;
	}
	
	printf("\n%i elevado a %i = %i.\n\n", n, m, valor);
	
	printf("Exerc�cio 10 ------------------------------------------\n\n");
	
	/*
	Crie um programa que exiba no final o somat�rio dos valores pares
	existentes na faixa de 1 at� 500.	
	*/
	
	int num1, soma2;
	
	soma = 0;
	
	for (num1 = 1; num1 < 501; num1++) {
		soma2 = soma2 + num1;
	}
	
	printf("O somat�rio dos n�meros de 1 a 500 � %i\n\n", soma2);
	
	printf("Exerc�cio 11 ------------------------------------------\n\n");

	/*
	Ler 5 n�meros inteiros e identificar o maior e o menor valor, exibir os
	mesmos.
	*/
	
    int N1, N2, N3, N4, N5;
    int maiorNumero, menorNumero;

	N1 = 1;
	N2 = 2;
	N3 = 3;
	N4 = 4;
	N5 = 5;

    maiorNumero = N1;
    menorNumero = N1;
    
    if (N2 > maiorNumero) {
        maiorNumero = N2;
    } else if (N2 < menorNumero) {
        menorNumero = N2;
    }
    
    if (N3 > maiorNumero) {
        maiorNumero = N3;
    } else if (N3 < menorNumero) {
        menorNumero = N3;
    }
    
    if (N4 > maiorNumero) {
        maiorNumero = N4;
    } else if (N4 < menorNumero) {
        menorNumero = N4;
    }
    
    if (N5 > maiorNumero) {
        maiorNumero = N5;
    } else if (N5 < menorNumero) {
        menorNumero = N5;
    }
    
    printf("Maior n�mero: %d\n", maiorNumero);
    printf("Menor n�mero: %d\n", menorNumero);
	
}

