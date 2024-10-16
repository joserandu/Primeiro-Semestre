# include <stdio.h>
# include <locale.h>

// Ponteiros

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Aula 1 ---------------------------------------------------------------------\n\n");

	
	// Para acessar o Valor
	int x;
	x = 10;
	
	printf("%i\n", x);
	
	// Para acessar o endere�o de mem�ria
	
	printf("%i\n", &x);
	
	// Criando um ponteiro
	
	int *ponteiro;  
	ponteiro = &x;  // O ponteiro est� apontando para o endere�o de mem�ria de x.
	
	printf("%i\n", *ponteiro);  // Ser� impresso o 10, que � o valor do endere�o que o ponteiro est� apontando.
	
	printf("%i\n", ponteiro);  // Nesse caso, ser� impresso o endere�o do valor x.
	
	// Exerc�cio
	int y = x;  // Lembrando que x = 10
	
	x = 20;
	
	// Quais valores ser�o impressos aqui?
	printf("%i | %i\n", x, y);
	
		// Resp: isso aconteceu porque a atribui��o do valor de y veio antes da mudan�a de valor de x.
	
	// Usando ponteiro
	
	x = 10;
	ponteiro = &x;
	
	y = 20;
	*ponteiro = y;
	
	printf("%i | %i\n", x, y);
	
//	O ponteiro mudou o valor do x, pois o valor do ponteiro (*ponteiro) � o valor de x;
	
// Estamos indo na fonte da vari�vel, que � o 


	printf("Aula 2 ---------------------------------------------------------------------\n\n");
	
	int a = 10;
	double b = 20.5;
	char c = 'a';

	int *pA = &a;
	/*Isso poderia ser feito dessa forma tamb�m:
		
		int *pX;
		pX = &x  // Perceba que n�o tem o * nessa linha
		
			Isso acontece porque n�o queremos que o VALOR armazenado no ponteiro seja o do endere�o de x (&x), mas sim o valor de x.
		
	*/
	double *pB;
	pB = &b;
	
	char *pC;
	pC = &c;  // Escrevi assim para fixar a ideia, mas eu prefiro do outro jeito.
	
	printf("Endere�o a: %i | Valor a: %i\n", pA, *pA);  // Sem o *, retornamos o endere�o
	printf("Endere�o b: %i | Valor b: %f\n", pB, *pB);  
	printf("Endere�o c: %i | Valor c: %c\n", pC, *pC);  
	
	double soma = *pA + *pB;  // N�o tem como somar os endere�os de mem�ria
	
	printf("Soma: %f\n", soma);

	int *resultado;
	
	resultado = &a;
	
	printf("Endere�o de a: %i\n", resultado);
	printf("Valor de a: %i\n", *resultado);
	
	printf("Aula 3 ---------------------------------------------------------------------\n\n");

	struct horario{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	
	depois = &agora;
	
//	*depois.hora = 20;  // Assim d� errado porque existe a precedencia do ponto sobre o *. Portanto:
	(*depois).hora = 20;
	(*depois).minuto = 20;
	(*depois).segundo = 20;
	
	printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);  // Se executar sem colocar os valores, ser�o impressos valores aleat�rios que estam na mem�ria.
	
	/*Esse � o jeito certo, mas como os programadores da linguagem acharam que isso da muito trabalho, eles criaram essa coisa linda:*/

	depois->hora = 22;
	depois->minuto = 30;
	depois->segundo = 45;
	
	printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);  	
	
	printf("Aula 4 ---------------------------------------------------------------------\n\n");

	int somatorio = 1;
	
	struct horario antes;
	
	antes.hora = somatorio + depois->segundo;
	antes.minuto = agora.hora * depois->minuto;
	antes.segundo = depois->minuto + depois->segundo;
	
	/*N�o tem nenhuma l�gica aqui, foi s� pra exemplificar o funcionamento das opera��es nesse caso.*/
	
	printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);  	

	printf("Aula 5 ---------------------------------------------------------------------\n\n");

	struct horario2 {
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	
	struct horario2 hoje;
	
//	Agora que criamos os ponteiros, precisamos de vari�veis para eles apontarem

	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	printf("Hora: %i\nMinuto: %i\nSegundo: %i\n\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);  // No printf funciona desse jeito e n�o funciona o ->
	
	// Alterando valor
	*hoje.pSegundo = 1000;
	
	printf("Hora: %i\nMinuto: %i\nSegundo: %i\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
	
	/*
	O que acontece � que o formato de seta serve para atribuir valores, como por exemplo:
	
	(*hora).segundo = 25; Passa a ser:
	hora->segundo = 25;
	
	Tente imaginar o que seria escrito da forma feia 
	*/

	
	return 0;
}






