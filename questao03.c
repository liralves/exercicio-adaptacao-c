#include <stdio.h>
#include <stdbool.h>

int main(){
    
    float salario, aumento, total;
    char dig;
    
    
    
    while(true){
        
        printf("Digite o seu salário atual: ");
        scanf("%f", &salario);
        fflush(stdin);
        
        if(salario < 1320){
            printf("\nValor inválido. Insira valores maiores do que 1320,00.\n");
            continue;
        }
        
        if(salario <= 1500){
            aumento = (salario * 0.20);
        } else if (salario <= 2.500){
            aumento = (salario * 0.15);
        } else if (salario <= 4.000){
            aumento = (salario * 0.10);
        } else {
            aumento = (salario * 0.05);
        }
        
        total = (salario + aumento); 
        
        printf("O funcionário terá aumento de R$ %.2f e passará a receber R$ %.2f", aumento, total);
        
        printf("\nDeseja continuar usando o programa?\n");
        scanf("%s", &dig);
        fflush(stdin);
        
        while(dig != 'S' && dig != 'N'){
            printf("Dígito inválido. Entre apenas com [S] ou [N]\n");
            scanf("%s", &dig);
            fflush(stdin);
        }
            
        if (dig == 'N'){
            return 0;
        }else{
            continue;
        }
            
        
    }
     
    
}
