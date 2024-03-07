#include <stdio.h>

int main()
{
    int i, j, num;
    
    printf("Digite um número: "); 
    scanf("%d", &num); 
    
    for(i = num; i > 0; i--){ 
        for(j = 1; j <= i; j++){
            printf(" %d", j);
        }
        
        printf("\n");    
    }
    
    
    return 0;
}
