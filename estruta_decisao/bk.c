#include <stdio.h>

int main(){
    float valorLancheRodeio = 0;
    float valorBatataGrande = 0;
    float ValorRefriCoca = 0;
    float ValorSobremesa = 0;

    printf("Qual o valor do lanche?");
    scanf("%f", &valorLancheRodeio);

    printf("Qual o valor da batata?");
    scanf("%f", &valorBatataGrande);

    printf("Qual o valor do refri?");
    scanf("%f", &ValorRefriCoca);

    printf("Qual o valor da sobremsa?");
    scanf("%f", &ValorSobremesa);

    float total= valorLancheRodeio + valorBatataGrande + ValorRefriCoca + ValorSobremesa;

    if(total < 40){
        printf("O valor ficou barato R$ %.2f", total);
    } else if (total >= 40 && total <= 55){
        printf("O valor ficou razoavel R$ %.2f", total);
    } else if (total > 55){
        printf("O valor ficou caro R$ %.2f", total);
    }



    return 0;
}