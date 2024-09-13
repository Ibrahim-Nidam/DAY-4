#include <stdio.h>

int main(){
    int nombre,exp,res,i = 1;

    printf("Entrez une base : ");
    scanf("%d",&nombre);
    do{
        printf("Entrez une exposant : ");
        scanf("%d",&exp);
    }while(exp < 0);

    res = nombre;

    while(i < exp){

        res *=  nombre;
        i++;
    }

        printf("%d ^ %d = %d",nombre,exp,res);
    return 0;
}