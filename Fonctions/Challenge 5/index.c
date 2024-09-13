#include <stdio.h>

void factoriel(int nombre, int f){

    for (int i = 0; i < nombre; i++){
        f += f * i;
    }
        printf("%d! = %d",nombre,f);
}

void entrezDonne(int *nombre){
    printf("Entrez un nombre : ");
    scanf("%d",&*nombre);

}

int main(){
    int nombre,f=1;
    entrezDonne(&nombre);
    factoriel(nombre,f);
    return 0;
}