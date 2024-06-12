#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concatena(char *str1, char *str2);

int main()
{
    char a[] = "Alguma", b[] = "coisa";
    char *c = concatena(a, b);
    printf("%s\n", c);

    free(c);
}

char* concatena(char *str1, char *str2)
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    char *p = malloc(n1 + n2 + 1);

    strcpy(p, str1);
    strcpy(p + n1, str2);

    return p;
}