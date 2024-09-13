#include <stdio.h>

int main() {
    int num, somme = 0, moy, n = 0, i = 0;

    do {
        printf("Entrez un numéro : ");
        scanf("%d", &num);

        if (num % 10 == 0) {
            somme += num;
            i++;
        }

        n++;
    } while (n < 5);

    if (i > 0) {
        moy = somme / i;

        while (moy % 10 == 0 && moy != 0) {
            moy /= 10;
        }

        printf("%d\n", moy);
    } else {
        printf("Aucun nombre valide pour le calcul.\n");
    }

    return 0;
}
