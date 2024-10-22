/*
	Programa de Estagio Target - Icaro Pavan
	
	EXERCICIO 01

	1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor
	sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
	escreva um programa na linguagem que desejar onde, informado um número, ele calcule
	a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

	IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#include <stdio.h>

void verificarSequencia(int valor);

int main() {
	int valor;
	
	printf("Informe um valor para verificar na sequencia de Fibonacci: ");
	scanf("%i", &valor);
	
	verificarSequencia(valor);
	
	return 0;
}

void verificarSequencia(int valor) {
	int numAtual = 0;
	int x = 0;
	int y = 1;
	
	printf("\nSequencia gerada:\n%i %i ", x, y);
	
	while(1) {
		numAtual = x + y;
		x = y;
		y = numAtual;
		
		printf("%i ", numAtual);
		
		if(numAtual >= valor)
			break;
	}
	
	if(numAtual == valor)
		printf("\n\nO valor se encontra na sequencia!\n");
	else
		printf("\n\nO valor nao esta na sequencia :(\n");
}
