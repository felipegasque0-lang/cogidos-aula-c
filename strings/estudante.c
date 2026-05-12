#include <stdio.h>

int main(){

    char escola [30];
    char nome[30];
    char curso_senai[30];
    char serie_escola[10];
    char idade[20];

    printf("Qual o seu nome?");
    scanf(" %[^\n]", nome);

    printf("Qual a sua idade?");
    scanf(" %[^\n]", idade);

    printf("Qual sua escola?");
    scanf(" %[^\n]", escola);

    printf("Qual o seu curso do senai?");
    scanf(" %[^\n]", curso_senai);


    printf("\n --Suas informacao academicas sao--");
    printf("\nEsino medio: %s", escola);
    printf("\nEnsino Tecnico: %s", curso_senai);
    
    return 0;
}