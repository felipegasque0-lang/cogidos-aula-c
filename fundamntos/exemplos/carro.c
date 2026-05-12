/*
você precisa comprar um carro e 
pretende realizar o pagamento de forma parcelada.
crie um algoritmo que calcule o valor
das parcelas descontando a o valor
da entrade de 30%.
*/
#include <stdio.h>
int main(){
    //entrada
    float valorCarro = 0;
    int Parcelas = 0;
    const float entrada30 = 0.30;

    printf("Qual o valor do carro?");
    scanf("%f", &valorCarro);

    printf("Quantas parcelas deseja pagar?");
    scanf("%i", &Parcelas);

    //processamento
    float total = (valorCarro * entrada30);
    float carroTotal = valorCarro - total;
    float totalParcelas = carroTotal / Parcelas;
    //saída
    printf("O valor do entrada e %.2f \n", total);
    printf("O valor da parcela e %.2f", totalParcelas);
    
    return 0;
}