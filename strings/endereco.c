#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    char nome [10] = "Felipe";
    char logradouro[20] = "Rua João Chiodi";
    char bairro[15] = "Mario Dedini";
    char cidade[11] = "Piracicaba";
    char uf[3] = "Sp";

    printf("---Minhas informações residenciais---");
    printf("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf("\nCidade: %s", cidade);
    printf("\nUF: %s", uf);

    return 0;
}