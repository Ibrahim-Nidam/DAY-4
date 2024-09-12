#include <stdio.h>

int main(){
    int nomTab;
    int facteur;
    int res;

    do{
        printf("Entrez le Nombre de casse du tableaux : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);

    printf("Entrez le multiplicateur du tableaux : ");
    scanf(" %d",&facteur);

    int nomb[nomTab];
    int size = sizeof(nomb)/sizeof(nomb[0]);

    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre : ");
        scanf(" %d",&nomb[i]);
    }   

    for (int i = 0 ; i < size ; i++){
        res = nomb[i] * facteur;
        printf("%d * %d = %d\n",nomb[i],facteur,res);
    }

    
    
    return 0;
}