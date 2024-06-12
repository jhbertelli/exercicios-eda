#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char* str);

int main()
{
    char *str = "uma mensagem secreta";
    char *separated[strlen(str)];
    int count;

    Pilha p;
    Pilha p2;
    inicializa_pilha(&p, strlen(str));
    inicializa_pilha(&p2, strlen(str));

    for (int i = 0; i < strlen(str) + 1; i++)
    {
        char temp[strlen(str)];

        printf("%d - %c\n", i, str[i]);

        if (str[i] != ' ' && str[i] != 0)
            empilha(&p, str[i]);
        else
        {
            int j = 0;
            while (!pilha_vazia(p))
            {
                int t;
                desempilha(&p, &t);
                printf("%c", t);
                temp[j] = t;
                j++;
            }
            temp[j] = '\0';
            separated[count] = temp;
            count++;
        }

    }
    // separated[0] = "why";
        // desaloca_pilha(&p);
    for (int i = 0; i < count; i++)
    {
        printf("%s", separated[i]);
        // if (i < count - 1) printf(" ");
    }

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