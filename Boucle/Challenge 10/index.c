#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int nom;
    do{

        printf("Entrez la longeur du mode de passe (5+): ");
        scanf(" %d",&nom);

    }while(nom < 4);

    char pass[nom];
    srand(time(NULL));
    int random;

    for(int i = 0; i < nom ; i++){
    // ASCII 0-9:  48-57, a-z : 97-122, A-Z: 65-90
        do{

            random = rand() % 123;

        }while (!((random >= 48 && random <= 57) || (random >= 65 && random <= 90) || (random >= 97 && random <= 122)) );

        pass[i] = (char)random;
    }

    for(int i = 0; i < nom ; i++){
        printf("%c",pass[i]);
    }

    return 0;
}