#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#include <string.h>

void inverte_string( char *s );
int eh_palindrome( char *s );

int main(int argc, char *argv[]) {
	char str[] = "Ciclano de Tal";
	printf("Original: %s\n", str);
	inverte_string( str );
	printf("Invertida: %s\n", str);
	
	char str2[] = "ARARA";
	printf("%d\n", eh_palindrome( str2 ) );
	
	return 0;
}

void inverte_string( char *s ){
	Pilha p1;
	inicializa_pilha( &p1, strlen( s ) );
	int i;
	for( i = 0 ; s[i] != 0 ; i++ ) // '\0'
		empilha( &p1, s[i] );
		
	i = 0;
	while( !pilha_vazia( p1 ) ){
		int temp;
		desempilha( &p1, &temp );
		s[i] = temp;
		i++;
	}
	desaloca_pilha( &p1 );
}

int eh_palindrome( char *s ){
	char inversa[strlen(s)];
	strcpy( inversa, s );
	inverte_string( inversa );
	return strcmp( s, inversa ) == 0;	
}

