#include <stdio.h>

int somme(int a, int b){
    return a + b;
}

void printMessage(int a,int b){
    printf("La somme du %d + %d = %d",a,b,somme(a,b));
}
void entrezDonne(int *a , int *b){
    printf("Entrez le nombre a : ");
    scanf(" %d",&*a);
    printf("Entrez le nombre b : ");
    scanf(" %d",&*b);

    printMessage(*a,*b);
}


int main(){
    int a,b;
    entrezDonne(&a ,&b);
    return 0;
}