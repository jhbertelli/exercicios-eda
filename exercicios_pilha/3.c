#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char* str);

int main()
{
    char str[] = "Flandre Scarlet";

    inverte(str);

    printf("%s", str);
}

void inverte(char* str)
{
    Pilha p;

    inicializa_pilha(&p, strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        empilha(&p, str[i]);
    }
    
    int i = 0;

    while (!pilha_vazia(p))
    {
        int temp;
        desempilha(&p, &temp);
        str[i] = temp;
        i++;
    }

    desaloca_pilha(&p);
}