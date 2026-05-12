 /* você foi ao cabeleleiro e no salão atualmente
  existe várias, opções crie um algoritmo que 
  calcule o total da sua conta e classifique 
  com a estrutura de decisão encadeada o 
  resultado */

  #include <stdio.h>

  int main (){
    float valorLuzes = 0;
    float CorteCabelo = 0;
    float LavouCabelo =0;

      printf("Qual o valor da luzes?");
    scanf("%f", &valorLuzes);

    printf("Qual o valor do corte?");
    scanf("%f", &CorteCabelo);

    printf("Qual o valor da lavagem?");
    scanf("%f", &LavouCabelo);

    float total= valorLuzes + CorteCabelo + LavouCabelo;

    if(total < 50){
        printf("O valor ficou barato R$ %.2f", total);
    } else if (total >=55  && total <= 90){
        printf("O valor ficou razoavel R$ %.2f", total);
    } else if (total > 95){
        printf("O valor ficou caro R$ %.2f", total);
    }


    return 0;
  }