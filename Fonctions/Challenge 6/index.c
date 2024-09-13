#include <stdio.h>

void fibonacci(int a,int b,int f,int next){

    if (f == 0) {
        printf("F(0) = %d\n", a);
    } else if (f == 1) {
        printf("F(1) = %d %d\n", a, b);
    } else {
        printf("%d %d", a, b); 

        for (int i = 2; i < f; i++) { 
            next = a + b;
            printf(" %d", next); 
            a = b;
            b = next;
        }
    }
}

void entrezDonne(int *f){
    printf("Entrez un nombre : ");
    scanf("%d", &*f);
}

int main(){
    int f, a = 0, b = 1, next;
    entrezDonne(&f);
    fibonacci(a ,b ,f ,next);
    return 0;
}
