#include <stdio.h>

int main() {
    float nota = 0;
    int falta = 0;
    int ead = 0;

    printf("Qual a nota final do aluno?");
    scanf("%f", &nota);

    printf("Quantas faltas o aluno teve?");
    scanf("%i", &falta);

    printf("Qual a porcentagem que voce teve no curso ead?");
    scanf("%i", &ead);

    if(nota >= 50 && falta <= 25 && ead == 100) {
        printf("Esta aprovado, ufa passse");
    } else {
        printf("Esta reprovado, ai ai ai lascou");
    }

    return 0;
}