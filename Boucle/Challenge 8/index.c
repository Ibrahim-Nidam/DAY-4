#include <stdio.h>

int main (){
    int nomTab,rech,n;

    do{
        printf("Entrez le Nombre de casse du tableaux : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);

    int nomb[nomTab];
    int size = sizeof(nomb)/sizeof(nomb[0]);

    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre : ");
        scanf(" %d",&nomb[i]);
    }   

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nomb[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Entrez le nombre que vous recherchez dans le tableaux : ");
    scanf(" %d",&rech);

    int debut = 0;
    int fin = nomTab - 1;
    int trouve = -1;

    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;

        if (nomb[milieu] == rech) {
            trouve = milieu;
            break;
        } else if (nomb[milieu] > rech) {
            fin = milieu - 1;
        } else {
            debut = milieu + 1;
        }
    }

    if (trouve != -1) {
        printf("Le nombre %d a été trouvé à l'indice %d.\n", rech, trouve+1);
    } else {
        printf("Le nombre %d n'est pas présent dans le tableau.\n", rech);
    }

    
    
    return 0;
}