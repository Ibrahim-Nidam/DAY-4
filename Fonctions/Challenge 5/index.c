#include <stdio.h>

void factoriel(int nombre, int f){

    for (int i = 0; i < nombre; i++){
        f += f * i;
    }
        printf("%d! = %d",nombre,f);
}

int main(){
    int nombre,f=1;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    factoriel(nombre,f);
    return 0;
}