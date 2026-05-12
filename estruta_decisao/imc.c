#include <stdio.h>

    //declaração de variáveis
    //Entrada

int main() {
    float altura = 0;
    float peso = 0;
    
    //processamento
    printf("Qual o seu peso?");
    scanf("%f", &peso);

    printf("Qual a sua altura?");
    scanf("%f", &altura);
    
    float IMC = peso / (altura*altura);

    //saída
    printf("O seu IMC e %f \n", IMC);
    if (IMC >= 18.5 && IMC <=24.9){
        printf("Seu peso esta normal");
    } else if (IMC >= 25 && IMC <= 29.9){
        printf("voce esta com sobrepeso");
    } else if (IMC >=30){
        printf("voce esta obeso");
    } else if (IMC <18.5);{
        printf("voce esta com o imc abaixo do normal");
    }
   
    return 0;
}