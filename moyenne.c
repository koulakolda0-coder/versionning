#include <stdio.h>

int main() {
    int N, i, nombre, somme = 0;

    printf("Combien d'entiers voulez-vous saisir ? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        printf("Entier %d : ", i);
        scanf("%d", &nombre);
        somme += nombre;
    }

    double moyenne = (double)somme / N;
    printf("Moyenne des entiers saisis : %.2lf\n", moyenne);

    return 0;
}

