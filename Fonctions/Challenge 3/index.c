#include <stdio.h>

int grands(int a, int b){
    if (a > b) {
        return a;
    }else {
        return b;
    }
}

int main(){
    int a,b;

    printf("Entrez le nombre a : ");
    scanf(" %d",&a);
    printf("Entrez le nombre b : ");
    scanf(" %d",&b);

    printf("La Nombre le plus grand des deux est %d",grands(a,b));
    return 0;
}