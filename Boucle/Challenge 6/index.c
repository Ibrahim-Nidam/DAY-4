#include <stdio.h>

int main (){
    int num;


    printf("Entrez un nombre :");
    scanf(" %d",&num);

    for(int i = 1; i <= num ; i++){

        if(num % i == 0 ){
            printf("N = %d, ",i);
        }
    }
    return 0;
}