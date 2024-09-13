#include <stdio.h>

int grands(int a, int b){
    if (a > b) {
        return a;
    }else {
        return b;
    }
}

void printMessage(int a,int b){

    printf("La Nombre le plus grand des deux est %d",grands(a,b));
}

void entrezDonne(int *a, int *b){
    printf("Entrez le nombre a : ");
    scanf(" %d",&*a);
    printf("Entrez le nombre b : ");
    scanf(" %d",&*b);
    printMessage(*a,*b);
}


int main(){
    int a,b;
    entrezDonne(&a,&b);
    return 0;
}