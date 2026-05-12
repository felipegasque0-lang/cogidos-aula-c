#include <stdio.h>
#include <stdbool.h>

int main(){
    bool comprouIngressoAntes = 0;
    bool comproIngressoNaHora = 0;

    printf("Comprou o ingresso antes? 0->nao, 1->sim");
    scanf("%s", &comprouIngressoAntes);

    printf("Comprou o ingresso na hora? 0->nao, 1->sim");
    scanf("%s", &comproIngressoNaHora);

    if(comprouIngressoAntes || comproIngressoNaHora){
    printf("Vai assistir o show!!!");
    } else {
        printf("nao vai assistir o show");
    }
    
    return 0;
}