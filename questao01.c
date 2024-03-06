#include <stdio.h>
#define pi 3.14

int main()
{
    float raioR, compriR, areaR, volR;
    
    printf("Informe o valor do raio: ");
    scanf("%f", &raioR);
    
    compriR = (2*pi*raioR);
    areaR = (pi*raioR*raioR);
    volR = (4 * pi*raioR*raioR*raioR)/3;
    
    printf("\nO comprimento da circunferência de raio R: %.2fcm", compriR);
    printf("\nA área do círculo de raio R: %.2fcm", areaR);
    printf("\nO volume da esfera de raio R: %.2fcm", volR);
    
    return 0;
}
