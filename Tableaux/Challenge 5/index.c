#include <stdio.h>

int main(){
    int nomTab;
    int min,n = 100000;

    do{
        printf("Entrez le Nombre de casse du tableaux : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);

    int nomb[nomTab];
    int size = sizeof(nomb)/sizeof(nomb[0]);

    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre : ");
        scanf(" %d",&nomb[i]);

        n = nomb[i];
        
        if (n <= min){
            min = n;
        }
    }

 
        printf("Le Nombre Minimal totale est %d\n",min);
    return 0;
}