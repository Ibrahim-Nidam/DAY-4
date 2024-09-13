#include <stdio.h>

int main(){
    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};

    int n;

    do{
        printf("Entrez le Nombre du jour Choisi : \n");
        printf("1- Lundi        2- Mardi        3- Mercredi \n");
        printf("4- Jeudi        5- Vendredi     6- Samedi\n7- Dimanche\n");

        scanf(" %d",&n);
    }while (n < 1 || n > 7 );

    printf("\n");
    int size = sizeof(*jours)/sizeof(*jours[0]);

    for(int i = n - 1; i < size ; i++){
        printf("%s\n",jours[i]);
    }

    return 0;
}