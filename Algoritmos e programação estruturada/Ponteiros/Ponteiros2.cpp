# include <stdio.h>
# include <locale.h>

// Ponteiros

//void testeVariavel(int);
//void testePonteiro(int);

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Aula 7 ---------------------------------------------------------------------\n\n");
	
	// Passando ponteiros para fun��es
	
	void testeVariavel (int x);  // Poderia ter declarado no come�o, mas coloquei aqui pra ficar diferente.
	void testePonteiro (int *pX);
	int teste = 1;
	int *pTeste = &teste;
	
	printf("%i\n", teste);
	
	testeVariavel(teste);
	
	printf("%i\n", teste);
	
	testePonteiro(pTeste);  // Sem o asterisco porque queremos passar o endere�o para a fun��o.

	printf("%i\n", teste);  // Agora sim vai alterar.
	
	/*Isso acontece porque quando passamos uma vari�vel para a fun��o, � criada uma c�pia dessa vari�vel na mem�ria, ou seja, n�o alteramos o valor original da variavel
	Mas quando fazemos isso com ponteiros essa c�pia n�o � criada, pois estamos passando um endere�o de mem�ria.
	
		Nesse caso estamos passando um endere�o de mem�ria para que a fun��o modifique.
		Estamos indo direto na fonte.
		
	Isso serve para que a gente n�o gaste tanta mem�ria RAM ao chamar fun��es. Ponteiros ajudam no rendimento da aplica��o.
	*/
	
	printf("Aula 8 ---------------------------------------------------------------------\n\n");
	
	struct lista {
		int valor;
		struct lista *proximo;
	};
	
	struct lista m1, m2, m3;
	struct lista *gancho = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *)0;  // Isso serve para mostrar que aponta para um valor nulo.
	
	while (gancho != (struct lista *)0) {
		printf("%i\n", gancho->valor);
		gancho = gancho->proximo;
	}
	
	return 0;
}

void testeVariavel(int x) {
	++x;
}

void testePonteiro(int *pX) {  // o parametro � um endere�o de mem�ria
	++*pX;
}


