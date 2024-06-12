#include <stdio.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main(int argc, char* argv[])
{
    float max;
    int n, indice;

    printf("Informe o tamanho do vetor\n");
    scanf("%d", &n);

    float numeros[n];

    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor %d\n", i + 1);
        scanf("%f", &numeros[i]);
    }
    
    max_vetor(numeros, n, &max, &indice);

    printf("O maior valor eh %.2f na posicao: %d\n", max, indice);
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice)
{
    int pos = 0;
    float max = 0;

    for (int i = 0; i < tam; i++)
        if (i == 0 || vet[i] > max) 
        {
            max = vet[i];
            pos = i;
        }

    *pMax = max;
    *pIndice = pos;
}