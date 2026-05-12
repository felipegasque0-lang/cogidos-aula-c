/*
você está trabalhando e gostaria de
guardar 25% do seu salário todo mês.
O banco está com um investimento que
rende 6.8% ao mês de juros e você
vai usar esse formato de investimento.
Crie um algoritmo para calcular seu
investimento.
*/

#include <stdio.h>
int main () {
    //entrada
    float salario = 0;
    int meses = 0;
    const float porcentagem = 0.25;
    const float fixo = 0.068;

    printf("Quanto voce ganha?");
    scanf ("%f", &salario);

    printf("Quantos meses voce vai guardar?");
    scanf("%i", &meses);

    //processamento
    float totalJurosPercentual = meses * fixo;
    float salario25 = salario * porcentagem;
    float totalDinheiro = meses * salario25;
    float totalJurosValor = totalDinheiro * totalJurosPercentual;
    float totalcomjuros = totalJurosValor + totalDinheiro;
    //saída
    printf("Total juros em %.2f \n", totalJurosPercentual);
    printf("Valor guardado sem juros R$ %.2f \n", totalDinheiro);
    printf("meses %i \n", meses);
    printf("valor do juros do banco R$ %.2f \n", totalJurosValor);
    printf("Valor guardado com juros R$ %.2f", totalcomjuros);

    return 0;
}