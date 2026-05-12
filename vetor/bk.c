#include <stdio.h>

int main(){

    char marmita[6] [20] ={ "Arroz", "Feijao", "Bife", "Frango", "batata", "macarrao"
    };

    printf("\nOla, somos da marmitexboa");

    printf("\n---Cardapio---");

    for(int i=0; i<6; i++){
        printf("\n %s", marmita[i]);
    } 

    int i = 0;
    int escolha;

    do {
        printf("\n\nVoce quer %s? (1 = sim / 0 = nao): ", marmita[i]);
        scanf("%d", &escolha);

        if(escolha == 1){
            printf("-> %s adicionado!", marmita[i]);
        }

        i++;

    } while(i < 6);

    return 0;
}