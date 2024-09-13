#include <stdio.h>

int main() {
    int multi;
    
    printf("Entrer un nombre a Multiplier : ");
    scanf(" %d",&multi);
    
    for (int i = 12; i >= 0; i--){
        int res = multi * i;
        printf("- %d * %d = %d\n",multi,i,res);
    }

    return 0;
}