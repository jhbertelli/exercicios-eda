#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int eh_palindrome(char *palavra);
void inverte(char *str);
void print_result(char *str);

int main()
{
    print_result("arara");
    print_result("subinoonibus");
    print_result("Flandre Scarlet");
}

void inverte(char *str)
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

int eh_palindrome(char *palavra)
{
    char temp[strlen(palavra)];

    strcpy(temp, palavra);

    inverte(temp);

    return !strcmp(temp, palavra);
}

void print_result(char *str)
{
    if (eh_palindrome(str))
        printf("A palavra %s eh um palindrome.\n", str);
    else
        printf("A palavra %s NAO eh um palindrome.\n", str);
}