#include <stdio.h>

int main(){
    int dia = 0;

    printf("Qual dia da semana? 1->dom,7->sab");
    scanf("%i", &dia);

    switch (dia) {
        case 1:
        printf("Domingou !!!");
        break;
        case 2:
        printf("Segundona, vamos pra cima");
        break;
        case 3:
        printf("Terca, bora");
        break;
        case 4:
        printf("Quarta, ta no meio ja");
        break;
        case 5:
        printf("Quinta, so mais um pouco");
        break;
        case 6:
        printf("Sexta, so mais um pra descansar");
        break;
        case 7:
        printf("Sabado, dia de limpar a casa");
    }


    
    
    return 0;
}