#include <stdio.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main()
{
    int count, min, max;

    printf("Insira o tamanho do vetor:\n");
    scanf("%d", &count);

    int vet[count];

    for (int i = 0; i < count; i++)
    {
        printf("Insira o valor %d\n", i + 1);
        scanf("%d", &vet[i]);
    }
    
    max_min(vet, count, &min, &max);

    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d", max);
}

void max_min(int vet[], int tam, int *pMin, int *pMax)
{
    int min = 0, max = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] > max) max = vet[i];
        if (vet[i] < min) min = vet[i];

        if (i == 0)
        {
            min = vet[i];
            max = vet[i];
        }
    }
    
    *pMin = min;
    *pMax = max;
}