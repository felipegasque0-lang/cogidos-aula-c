/*
Calcula o imc
de uma pessoa 
com valores
fixos nas variáveis
e mostre o valor ao final
*/

#include <stdio.h>

    //declaração de variáveis
    //Entrada

int main() {
    float altura = 1.75;
    float peso = 54;
    
    //processamento
    float IMC = peso / (altura*altura);

    //saída
    printf(" O seu IMC e %f", IMC);
    return 0;
}