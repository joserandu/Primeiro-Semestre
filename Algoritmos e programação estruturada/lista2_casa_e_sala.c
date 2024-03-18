#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exerc�cio 1 ---------------------------------------------------------------\n");
	
	/*
		Elaborar um programa em que informe se o n�mero digitado pelo usu�rio � par ou
	impar.
	*/
	
	int n;
	
	printf("Digite um n�mero para ver se ele � par ou �mpar: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("%d � um n�mero par.\n\n", n);
	} else {
		printf("%d � um n�mero �mpar.\n\n", n);
	}
	
	printf("Exerc�cio 2 ---------------------------------------------------------------\n\n");

	/*
		Digitado um n�mero inteiro entre 0 e 100, informar o quanto ele est� distante de um
	determinado n�mero chave, carregado no pr�prio programa. Ex.: N�mero chave=20,
	n�mero digitado=15, resposta=5. N�mero chave=17, n�mero digitado=20, resposta=3
	(Obs.: a resposta dever� ser sempre um n�mero positivo).
	*/
	
	int num, chave;
	
	chave = 80;
	
	printf("Digite um n�mero inteiro entre 1 e 100: ");
	scanf("%d", &num);
	
	
	if(num == chave){
		printf("Voc� acertou o n�mero!\n\n");
	} else if (num < chave) {
		printf("A distancia do n�mero chave �: %d.\n\n", chave - num);
	} else {
		printf("A distancia do n�mero chave �: %d.\n\n", num - chave);
	}

	printf("Exerc�cio 3 ---------------------------------------------------------------\n\n");

	/*
		Uma Universidade tem problemas com arredondamento das m�dias dos alunos,
	pois cada professor estipula um crit�rio de arredondamento. Devemos elaborar um
	programa, em Linguagem C++, para a secretaria da Universidade, resolvendo esse
	problema. O programa deve solicitar uma nota e fazer o devido arredondamento.
	Regras:
	Notas que ultrapassem 0,5 de resto ser�o arredondas para CIMA.
		Ex: 4,6 �>5,0
	Notas que abaixo ou igual a 0,5 de resto ser�o arredondas para BAIXO.
		Ex: 4,5 �> 4,0
	*/
	
	float nota, decimal;
	
	printf("Digite a nota para arredondar: ");
	scanf("%f", &nota);
	
	int nota_inteira = nota;
	
	decimal = nota - nota_inteira;
	
	if (decimal > 0.5){
		printf("A nota arredondada � %d. \n\n", nota_inteira + 1);
	} else {
		printf("A nota arredondada � %d. \n\n", nota_inteira);
	}
	
	printf("Exerc�cio 4 ---------------------------------------------------------------\n\n");

	/*
		Fa�a um programa que leia 3 n�meros e exiba:
	a) O maior n�mero;
	b) O menor n�mero;
	c) O n�mero do meio
	*/
	
	float num1, num2, num3;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	
	printf("Digite o terceiro n�mero: ");
	scanf("%f", &num3);
		
	// Item a
	if (num1 > num2 && num1 > num3){
		printf("O maior n�mero � o %.2f.\n", num1);
	} else if (num2 > num1 && num2 > num3) {
		printf("O maior n�mero � o %.2f.\n", num2);
	} else {
		printf("O maior n�mero � o %.2f.\n", num3);
	}
	
	// Item b
	if (num1 < num2 && num1 < num3){
		printf("O menor n�mero � o %.2f.\n", num1);
	} else if (num2 < num1 && num2 < num3) {
		printf("O menor n�mero � o %.2f.\n", num2);
	} else {
		printf("O menor n�mero � o %.2f.\n", num3);
	}
	
	// Item c
	if (num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3) {
		printf("O n�mero do meio �: %.2f.\n\n", num1);
	} else if (num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3) {
		printf("O n�mero do meio �: %.2f.\n\n", num2);
	} else {
		printf("O n�mero do meio �: %.2f.\n\n", num3);
	}
	
	printf("Exerc�cio 5 ---------------------------------------------------------------\n\n");

	
	/*
		Fa�a o programa que calcule o sal�rio l�quido dos funcion�rios de uma empresa. O
	sal�rio l�quido � composto por descontos e adicionais, seguindo as seguintes regras:
	
	Descontos:
	
	- Sal�rio bruto < 800,00 � n�o realizar nenhum desconto;
	- 800,00 <= Sal�rio bruto <=1600,00 � descontar 8% de Imposto de Renda e 5% de encargos.
	- >1600,00 � descontar 15% de Imposto de Renda e 7% de encargos.
	
	Adicionais:
	
		Caso o funcion�rio tenha trabalhado mais de 160 horas no m�s, divida o seu sal�rio
	bruto por 160 (representa horas trabalhadas) e calcule 50% de adicional nas horas
	que excederam a 160.
		O usu�rio dever� digitar o sal�rio bruto e o n�mero de horas trabalhadas no m�s de
	cada funcion�rio, e dever� receber como resultado o sal�rio l�quido. O usu�rio poder�
	calcular sal�rio para N funcion�rios, para finalizar o programa o usu�rio dever� digitar
	0 no sal�rio bruto, ao finalizar o programa exibir o total geral dos sal�rios l�quidos.
	*/
	
	float salario, horas, salario_liquido;
	
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	
	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%f", &horas);
	
	if (salario < 800) {
		salario_liquido = salario;
	} else if (salario > 1600) {
		salario_liquido = salario * 0.78;
	} else {
		salario_liquido = salario * 0.87;
	}
	
	if (horas > 160){
		salario_liquido = salario_liquido + (salario / 160) + 0.5 * (horas - 160);
	}
	
	printf("O sal�rio l�quido desse funcion�rio � R$%.2f.\n\n", salario_liquido);

	printf("Exerc�cio 6 ---------------------------------------------------------------\n\n");

	/*
		Fa�a um programa que receba como entrada o m�s (de 1 a 12) e retorne o nome
	do respectivo m�s. 
	*/
	
	int numero_mes;
	
	printf("Digite o n�mero do m�s: ");
	scanf("%d", &numero_mes);
	
	char *mes;
	
	switch(numero_mes) {
        case 1:
            mes = "Janeiro";
            break;
        case 2:
            mes = "Fevereiro";
            break;
        case 3:
            mes = "Mar�o";
            break;
        case 4:
            mes = "Abril";
            break;
        case 5:
            mes = "Maio";
            break;
        case 6:
            mes = "Junho";
            break;
        case 7:
            mes = "Julho";
            break;
        case 8:
            mes = "Agosto";
            break;
        case 9:
            mes = "Setembro";
            break;
        case 10:
            mes = "Outubro";
            break;
        case 11:
            mes = "Novembro";
            break;
        case 12:
            mes = "Dezembro";
            break;
        default:
            mes = "M�s Inv�lido";
            break;
	
	}
	
	printf("O m�s %d � o m�s de %s.\n\n", numero_mes, mes);
	
	printf("Exerc�cio 7 ---------------------------------------------------------------\n\n");

	/*
		Entrar um c�digo de acesso a um curso. Se o c�digo for 1, 2,3,4 e 5 exibir na tela
	Engenharia, Edifica��es, Sistemas El�tricos, Turismo e An�lise de Sistemas
	respectivamente; caso contr�rio exibir que o c�digo � inv�lido. 
	*/
	
	int codigo;
	char *curso;
	
	printf("Digite o c�digo do curso: ");
	scanf("%d", &codigo);
	
	switch (codigo) {
		case 1:
			curso = "Engenharia";
			break;
		case 2:
			curso = "Edifica��es";
			break;
		case 3:
			curso = "Sistemas El�tricos";
			break;
		case 4:
			curso = "Turismo";
			break;
		case 5:
			curso = "An�lise de Sistemas";
			break;
		default:
			curso = "C�digo Inv�lido";
			break;
	}
	
	printf("%s.", curso);
	
	return 0;
}

