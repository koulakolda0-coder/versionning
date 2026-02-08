#include <stdio.h>

int main() {
    int N, i, nombre, impairs = 0;

    printf("Combien d'entiers voulez-vous saisir ? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        printf("Entier %d : ", i);
        scanf("%d", &nombre);
        if(nombre % 2 != 0)
            impairs++;
    }

    printf("Nombre d'entiers impairs : %d\n", impairs);

    return 0;
}

