#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana? (dom->0, sab->6)" );
    scanf("%i", &dia);

    if(dia == 0) {
        printf("Domingo so alegria, de boa na lagoua");
    } else if(dia == 1) {
        printf("Segunda, bora trabalhar :)");
    } else if (dia == 2) {
        printf("Terca, vamos pra cima");
    } else if (dia == 3) {
        printf("quarta, ja ta no meeio");
    } else if (dia == 4) {
        printf("quinta, so mais uma pra descansar");
    } else if (dia == 5) {
        printf (" sexta, depois de trabalhar so descansar");
    } else if (dia == 6) {
        printf ("sabado, agora so descansar");
    } else {
        printf("Dia nao encontrado");
    }
    
    
    return 0;
}