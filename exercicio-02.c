/*
	Programa de Estagio Target - Icaro Pavan
	
	EXERCICIO 02
	
	2) Escreva um programa que verifique, em uma string, a existência
	da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade
	de vezes em que ela ocorre.

	IMPORTANTE: Essa string pode ser informada através de qualquer entrada
	de sua preferência ou pode ser previamente definida no código;
*/

#include <stdio.h>

int verificarLetraA(char palavra[50]);

int main() {
	char palavra[50];
	int quantidadeLetraA;
	
	printf("Informe uma palavra de ate 50 letras: ");
	fgets(palavra, sizeof(palavra), stdin);
	
	quantidadeLetraA = verificarLetraA(palavra);
	
	if(quantidadeLetraA == 0)
		printf("\nA palavra fornecida nao possui nenhuma letra A.\n");
	else
		printf("\nA palavra fornecida possui a letra A!\nQuantidade de letras A encontradas: %i\n", quantidadeLetraA);
	
	return 0;
}

int verificarLetraA(char palavra[50]) {
	int quantidade = 0;
	int i;
	
	for(i=0; palavra[i] != '\0'; i++) {
		if(palavra[i] == 'A' || palavra[i] == 'a')
			quantidade++;
	}
	
	return quantidade;
}
