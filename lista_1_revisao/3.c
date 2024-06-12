#include <stdio.h>

void cacula_hora(int totalMinutos, int *ph, int *pm);

int main()
{
    int minutos, horaPosMeiaNoite, minutoPosMeiaNoite;

    printf("Insira minutos:\n");
    scanf("%d", &minutos);

    cacula_hora(minutos, &horaPosMeiaNoite, &minutoPosMeiaNoite);

    printf("Passaram %d horas e %d minutos depois da meia-noite.\n",
        horaPosMeiaNoite,
        minutoPosMeiaNoite);
}

void cacula_hora(int totalMinutos, int *ph, int *pm)
{
    *ph = totalMinutos / 60;
    *pm = totalMinutos % 60;
}