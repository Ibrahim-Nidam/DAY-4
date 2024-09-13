#include <stdio.h>
#include <string.h>

void sensInverse();
void entrezDonne(char *num);


int main() {
    sensInverse();
    return 0;
}

void entrezDonne(char *num){
    printf("entrer une chaine de charactère : ");
    scanf(" %s",num);
}

void sensInverse(){
    char num[100];
    entrezDonne(num);
    int longeur = strlen(num);
    
    for (int i = longeur - 1; i >=0 ; i--){
        printf("%c",num[i]);
    }
}

