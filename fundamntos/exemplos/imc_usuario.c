#include <stdio.h>

int main() {
    float altura = 0;
    float peso = 0;

    printf("qual a sua altura?");
    scanf("%f", &altura);

    printf("qual o seu peso?");
    scanf("%f", &peso);
    
    //processamento
    float IMC = peso / (altura*altura);

    //saída
    printf(" O seu IMC e %f", IMC);
   
    return 0;
}
