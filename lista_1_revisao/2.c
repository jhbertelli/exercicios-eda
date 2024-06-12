#include <stdio.h>
#include <math.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main()
{
    float raio, perimetro, area;

    printf("Escreva o raio do circulo:\n");
    scanf("%f", &raio);

    calcula_circulo(raio, &perimetro, &area);

    printf("Perimetro: %f\n", perimetro);
    printf("Area: %f\n", area);
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea)
{
    *pPerimetro = 2 * raio * M_PI;
    *pArea = raio * raio * M_PI;
}