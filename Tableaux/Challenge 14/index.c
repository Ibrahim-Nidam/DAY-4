#include <stdio.h>

int main(){
    int nomTab;
    int somme,moyen;

    do{
        printf("Entrez le Nombre de casse du tableaux : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);

    int nomb[nomTab];
    int size = sizeof(nomb)/sizeof(nomb[0]);

    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre : ");
        scanf(" %d",&nomb[i]);
        somme += nomb[i];
    }
    
    moyen = somme / size;
    printf("Le moyen du tableau est %d\n",moyen);
    return 0;
}