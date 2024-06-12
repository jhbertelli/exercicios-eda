#include <stdio.h>
#include <stdlib.h>

float *clone(float *v, int n);

int main()
{
    int count;

    printf("Insira a quantidade de elementos\n");
    scanf("%d", &count);

    float vet[count];
    
    for (int i = 0; i < count; i++)
        scanf("%f", &vet[i]);

    printf("Vetor 1:\n");

    for (int i = 0; i < count; i++)
        printf("%f\n", vet[i]);

    float * vetClone = clone(vet, count);

    printf("Vetor clonado:\n");

    for (int i = 0; i < count; i++)
        printf("%f\n", vetClone[i]);


    free(vetClone);
}

float *clone(float *v, int n)
{
    float *p = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
        p[i] = v[i];

    return p;
}