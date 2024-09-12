#include <stdio.h>

int main(){
    int nomTab;
    int max,n = 0;

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
        
        if (n > max){
            max = n;
        }
    }

 
        printf("Le Nombre Maximal totale est %d\n",max);
    return 0;
}