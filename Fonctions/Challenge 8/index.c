#include <stdio.h>

void pair(int a){
    printf("Le nombre %d est pair ", a);
}

void impair(int a){
    printf("Le nombre %d est impair ", a);
}

void pariteCheck(int a){
    if (a % 2 == 0) {
        return  pair(a);
    }else{
        return impair(a);
    }

}

void entrerNombre(int *a){
    printf("Entrez une nombre pour afficher la parité : ");
    scanf(" %d",&*a);
}

int main(){
    int a;
    entrerNombre(&a);
    pariteCheck(a);
    return 0;
}