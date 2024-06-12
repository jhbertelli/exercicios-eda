#include <stdio.h>
#include <stdlib.h>

float calcularMedia(int tam, float vet[]);

int main()
{
    int n;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &n);

    float *p = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
        scanf("%f", &p[i]);
    
    float media = calcularMedia(n, p);

    int n_acima_media = 0;
    float *p_acima_media = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
    {
        if (p[i] >= media)
        {
            p_acima_media[n_acima_media] = p[i];
            n_acima_media++;
        }
    }

    free(p);

    printf("A media foi: %.2f\n", media);
    printf("Quantidade de numeros igual a media ou maior: %d\n", n_acima_media);
    
    for (int i = 0; i < n_acima_media; i++)
        printf("Numero %d: %.2f\n", i + 1, p_acima_media[i]);
    
    free(p_acima_media);
}

float calcularMedia(int tam, float *vet)
{
    float soma = 0;

    for (int i = 0; i < tam; i++)
        soma += vet[i];

    float media = soma / tam;

    return media;
}