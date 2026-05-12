#include <stdio.h>

int main(){

    float notas[4];
    float media = 0;
    float total = 0;

     for (int i = 0; i < 4; i++) {
        printf("\nQual a sua nota? ");
        scanf("%f", &notas[i]);
     }

    for (int i=0; i < 4; i++) {
        total += notas[i];
        
    }

    media = total / 4;

    printf(" A media das notas eh: %.2f", media);

    
    return 0;
}