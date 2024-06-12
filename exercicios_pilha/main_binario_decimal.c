#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(int argc, char *argv[]) {
	Pilha p1;
	inicializa_pilha( &p1, 32 );
	
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n );
	
	do{
		int resto = n % 2;
		empilha( &p1, resto );
		n /= 2;
	}while( n > 0 );
	
	//mostra_pilha( p1 );
	
	int temp;
	while( desempilha( &p1, &temp ) != ERRO_PILHA_VAZIA )
		printf("%d", temp);
	printf("\n\n");
	
	desaloca_pilha( &p1 );
	
	return 0;
}
