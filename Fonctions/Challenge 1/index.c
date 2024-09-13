#include <stdio.h>

int somme(int a, int b){
    return a + b;
}

int main(){
    int a,b;

    printf("Entrez le nombre a : ");
    scanf(" %d",&a);
    printf("Entrez le nombre b : ");
    scanf(" %d",&b);

    printf("La somme du %d + %d = %d",a,b,somme(a,b));
    return 0;
}