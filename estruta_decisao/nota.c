#include <stdio.h>

  float main() {

    float nota = 0;

    printf("Qual a sua nota?");
    scanf("%f", &nota);

    if (nota >=7) {
    printf("parabens, voce passou"); 
    } else {
        printf("melhore, voce nao foi aprovado");
    }
    
    return 0;
}