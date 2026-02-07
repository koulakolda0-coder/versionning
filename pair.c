#include <stdio.h>

int main() {
    int N, i, nombre, pairs = 0;

    printf("Combien d'entiers voulez-vous saisir ? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        printf("Entier %d : ", i);
        scanf("%d", &nombre);
        if(nombre % 2 == 0)
            pairs++;
    }

    printf("Nombre d'entiers pairs : %d\n", pairs);

    return 0;
}

