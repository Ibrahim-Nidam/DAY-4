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

    for (int i = 0 ; i < size - 1; i++){
        for (int j = 0 ; j < size - 1; j++){

            if(nomb[j]>nomb[j+1]){
                int temp = nomb[j];
                nomb[j] = nomb[j+1];
                nomb[j+1] = temp;

            }
        }

    }

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nomb[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}