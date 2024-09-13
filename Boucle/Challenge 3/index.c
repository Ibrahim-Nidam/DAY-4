#include <stdio.h>

int main(){
    int n,conteur = 0;

    printf("Entrez une nombre : ");
    scanf(" %d",&n);

    if(n == 1 || n == 0){
        printf("Le nombre %d n'est pas une nombre premiers",n);
    }else{

        for (int i=0; i < n; i++){
            
            if(n % (i+1) == 0){
                conteur++;
                if(conteur > 2){
                    printf("Le nombre %d n'est pas une nombre premiers",n);
                    break;
                }
            }
        }
    }

    if(conteur == 2){
        printf("Le nombre %d c'est une nombre premiers",n);
    }
    
    return 0;
}