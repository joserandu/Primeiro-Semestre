#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
			printf("\nLISTA 3 EXERC�CIOS PARA CASA\n\n");
	
	printf("Exerc�cio 1 -----------------------------------------\n\n");
	
	/*
	Elaborar um programa que escreva em tela os n�meros de 1 a 20, 
	utilizando o comando while( ).
	*/
	
	int a;
	
	while (a < 21) {
		printf("%i ", a);
		a++;
	}
	
	printf("\n\nExerc�cio 2 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela todos os n�meros pares 
	existentes entre 20 e 1, utilizando o comando while( ).
	*/

	int b;
	
	while (b < 21) {
		if (b % 2 == 0) {
			printf("%i ", b);
		}
		b++;
	}
	
	printf("\n\nExerc�cio 3 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela os n�meros de 1 a 20, 
	informando quando eles s�o pares e quando s�o �mpares, utilizando 
	o comando while( ).
	*/
	
	int c;
	
	c = 1;
	
	while (c < 21) {
		if (c % 2 == 0) {
			printf("%i = par\n", c);
		} else {
			printf("%i = impar\n", c);
		}
		c++;
	}
	
	printf("\nExerc�cio 4 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela os n�meros de 20 a 1, 
	utilizando o comando for( )
	*/
	
	for (a = 20; a > 0; a--) {  // vari�vel declarada anteriormente.
		printf("%i ", a);
	}
	
	printf("\n\nExerc�cio 5 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela todos os n�meros impares 
	existentes entre 1 e 20, utilizando o comando for( ).
	*/
	
	for (a = 1; a < 21; a++) {
		if (a % 2 != 0) {
			printf("%i ", a);
		}
	}
	
	printf("\n\nExerc�cio 6 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela os n�meros de 20 a 1, 
	informando quando eles s�o pares e quando s�o �mpares, utilizando 
	o comando for( ).
	*/
	
	for (a = 1; a < 21; a++) {
		if (a % 2 == 0) {
			printf("%i = par\n", a);
		} else {
			printf("%i = impar\n", a);
		}
	}
	
	printf("\nExerc�cio 7 -----------------------------------------\n\n");
	
	/*
	Elaborar um programa que escreva em tela os n�meros de 1 a 20, 
	utilizando o comando do-while( ).
	*/
	
	a = 1;
	
	do {
		printf("%i ", a);
		a++;
	} while (a < 21);
	
	printf("\n\nExerc�cio 8 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela todos os n�meros pares 
	existentes entre 1 e 20, utilizando o comando do-while( ).
	*/
	
	a = 1;
	
	do {
		if (a % 2 == 0) {
			printf("%i ", a);
		}
		a++;
	} while(a < 21);
	
	printf("\n\nExerc�cio 9 -----------------------------------------\n\n");

	/*
	Elaborar um programa que escreva em tela os n�meros de 1 a 20, 
	informando quando eles s�o pares e quando s�o �mpares, utilizando 
	o comando do-while( ).
	*/
	
	a = 1;
	
	do {
		if (a % 2 != 0) {
			printf("%i = par\n", a);
		} else {
			printf("%i = impar\n", a);
		}
		a++;
	} while(a < 21);
	
	printf("\n\nExerc�cio 10 -----------------------------------------\n\n");

	/*
	Elaborar um programa que seja uma �Calculadora�, onde o usu�rio 
	dever� digitar uma das seguintes teclas: �+�, �-�, �*�, �/� ou �S�. 
	- Caso escolha �S�, para sair, o programa dever� ser encerrado; 
	- Caso escolha �+�, �-�, �*� ou �/�, como opera��es aritm�ticas, o 
	programa dever� solicitar a digita��o de dois n�meros quaisquer 
	(n�mero a e n�mero b), um por vez, realizar a respectiva opera��o 
	aritm�tica (soma, subtra��o, multiplica��o ou divis�o) entre os 
	respectivos n�meros (a e b, nessa ordem) e ent�o apresentar o seu 
	resultado. Ap�s isto, dever� voltar � etapa inicial de digita��o 
	das teclas �+�, �-�, �*�, �/� ou �S� e repetir este item at� a 
	digita��o da tecla �S�.
	*/

	char operacao;
    float num1, num2, resultado;

    do {
        printf("Digite a opera��o desejada ('+', '-', '*', '/') "
		"ou tecle 's' para sair: ");
        scanf(" %c", &operacao);

        if (operacao != 's') {
            printf("Digite o primeiro n�mero: ");
            scanf("%f", &num1);
            printf("Digite o segundo n�mero: ");
            scanf("%f", &num2);
        }

        switch (operacao) {
            case '+': 
                resultado = num1 + num2;
                break;
            case '-': 
                resultado = num1 - num2;
                break;
            case '*': 
                resultado = num1 * num2;
                break;
            case '/': 
                resultado = num1 / num2;
                break;
            default: 
                resultado = 0;
                break;
        }

        if (operacao != 's') {
            printf("%f %c %f = %f\n\n", num1, operacao, num2, resultado);
        }

    } while (operacao != 's');
	
	printf("\n\nExerc�cio 11 -----------------------------------------\n\n");

	/*
	Escreva um programa para mostrar na tela os resultados de uma 
	tabuada de um n�mero qualquer fornecido via teclado.
	Exemplo:
	Digite o n�mero para a tabuada: 5 <Enter>
	Tabuada do 5:
	5 x 0 = 0
	5 x 1 = 5
	5 x 2 = 10
	5 x 3 = 15
	5 x 4 = 20
	5 x 5 = 25
	5 x 6 = 30
	5 x 7 = 35
	5 x 8 = 40
	5 x 9 = 45
	5 x 10 = 50
	*/
	
	int number, multiplicador;
	
	printf("Digite o n�mero para a tabuada: ");
	scanf("%i", &number);
	
	printf("Tabuada do %i:\n", number);
	
	for (multiplicador = 0; multiplicador < 11; multiplicador++) {
		printf("%i x %i = %i\n", number, multiplicador, number * multiplicador);
	}
	
}

