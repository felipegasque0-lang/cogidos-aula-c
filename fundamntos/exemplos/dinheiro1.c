#include <stdio.h>
int main () {
    //entrada
    float salario = 0;
    int meses = 0;
    const float porcentagem = 0.25;
    const float fixo = 0.068;
    const float um = 1;
    printf("Quanto voce ganha?");
    scanf ("%f", &salario);

    printf("Quantos meses voce vai guardar?");
    scanf("%i", &meses);

    //processamento
    float totalJurosPercentual = (um + fixo) * meses;
 
    //saída
    printf("Total juros em %.2f \n", totalJurosPercentual);
    return 0;
}