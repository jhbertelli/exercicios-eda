#include <stdio.h>

void troca_valor(float *x, float *y);

int main()
{
    float f1, f2;

    printf("Insira dois numeros float: ");
    scanf("%f%f", &f1, &f2);

    troca_valor(&f1, &f2);
    printf("Float 1: %f\n", f1);
    printf("Float 2: %f\n", f2);
}

void troca_valor(float* x, float* y)
{
    float aux = *x;
    *x = *y;
    *y = aux;
}