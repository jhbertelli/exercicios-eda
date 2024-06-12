#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor(char *s, int n);

int main()
{
    char str[] = "";
    int n;

    printf("Digite a string:\n");
    scanf("%[^\n]", str);

    printf("Digite a quantidade para repetir:\n");
    scanf("%d", &n);

    char *c = repetidor(str, n);
    printf("%s", c);

    free(c);

    return 0;
}

char *repetidor(char *s, int n)
{
    int len = strlen(s);

    char *p = malloc((len * n) + 1);

    for (int i = 0; i < n; i++)
        strcpy(p + (len * i), s);

    return p;
}