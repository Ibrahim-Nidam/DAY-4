#include <stdio.h>

int Multiplication(int a, int b){
    return a * b;
}

int main(){
    int a,b;

    printf("Entrez le nombre a : ");
    scanf(" %d",&a);
    printf("Entrez le nombre b : ");
    scanf(" %d",&b);

    printf("La Multiplication de %d * %d = %d",a,b,Multiplication(a,b));
    return 0;
}