#include <stdio.h>

int main(){

    int angulo;
    float distancia, altura;

    printf("Informe o valor ângulo: ");
    scanf("%i", &angulo);
    fflush(stdin);
    
    printf("Informe o valor da distância: ");
    scanf("%f", &distancia);

    altura = distancia*angulo;

    printf("%.2fm",altura);

    return 0;
    
}
