#include <stdio.h>

int Flinha(int);

int main(){
    int num, fat;
    printf("Digite um número para o fatorial: ");
    scanf("%d", &num);
    fat = Flinha(num);
    
    printf("O fatorial do número %d é: %d", num, fat);

    return 0;
}


int Flinha(int num)
{
    int fatorial;
    for (fatorial = 1; num > 1; num--)
    {
        fatorial *= num;
    }
    return fatorial;
}
