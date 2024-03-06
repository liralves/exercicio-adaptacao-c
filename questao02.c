#include <stdio.h>

int main()
{
    char caractere;
    
    printf("Digite um caractere qualquer: ");
    scanf("%c", &caractere);

    switch(caractere){
        
        case 'A':
        case 'Z':
           printf("O caractere que você digitou é uma letra maiúscula");
            if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
                printf(" e uma vogal.");
            }
            
            break;
        
        case 'a':
        case 'z':
        
            printf("O caractere que você digitou é uma letra minúscula");
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
                printf(" e uma vogal.");
                
            }
            
            break;
            
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            
            printf("O caractere que você digitou é um número.");
                break;
                
            default:
            
            printf("O caractere que você digitou é um símbolo.");
                break;
            
    }           
    
    
    return 0;
}
