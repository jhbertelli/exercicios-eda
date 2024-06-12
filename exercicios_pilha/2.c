#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatena( Pilha *p1, Pilha *p2 );

int main()
{
    Pilha p1, p2;
    char str1[] = "Buddy", str2[] = "Holly";

    inicializa_pilha(&p1, 50);
    inicializa_pilha(&p2, 50);

    for (int i = 0; i < strlen(str1); i++)
        empilha(&p1, str1[i]);
        
    for (int i = 0; i < strlen(str2); i++)
        empilha(&p1, str2[i]);
    
    concatena(&p1, &p2);
    
    printf("Dados da pilha:\n");

    for (int i = 0; p1.dados[i] != 0; i++)
        printf("%c", p1.dados[i]);
}

void concatena( Pilha *p1, Pilha *p2 )
{
    while (!pilha_vazia(*p2))
    {
        int temp;
        desempilha(p2, &temp);
        empilha(p1, temp);
    }

    empilha(p1, '\0');
}