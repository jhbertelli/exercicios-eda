#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[20];
    float preco;
} Produto;

void le_produto(Produto *x);
void mostra_produto(Produto x);

int main()
{
    int n;
    
    printf("Quantos produtos?\n");
    scanf("%d", &n);

    Produto *vet = malloc(sizeof(Produto) * n);

    for (int i = 0; i < n; i++)
    {
        printf("Dados do produto %d:\n", i + 1);
        le_produto(&vet[i]);
    }
    
    printf("Lista de produtos:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("Produto %d:\n", i + 1);
        mostra_produto(vet[i]);
    }
}

void mostra_produto(Produto x)
{
    printf("%d\n", x.codigo);
    printf("%s\n", x.descricao);
    printf("%.2f\n", x.preco);
}

void le_produto(Produto *x)
{
    printf("Codigo:\n");
    scanf("%d", &x->codigo);
    printf("Descricao:\n");
    scanf(" %[^\n]", x->descricao);
    printf("Preco:\n");
    scanf("%f", &x->preco);
}
