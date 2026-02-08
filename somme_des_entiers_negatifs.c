#include <stdio.h>

int main() {
    int N, i, nombre, somme_negatifs = 0;

    printf("Combien d'entiers voulez-vous saisir ? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        printf("Entier %d : ", i);
        scanf("%d", &nombre);
        if(nombre < 0)
            somme_negatifs += nombre;
    }

    printf("Somme des entiers négatifs : %d\n", somme_negatifs);

    return 0;
}

