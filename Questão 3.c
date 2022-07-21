#include<stdio.h>
#include<stdlib.h>

float n1, total;

int main()
{
    printf("Digite o valor da compra realizada na Loja Mamão com Açúcar:");
    scanf("%f", &n1);
    
    total = n1 / 5;
    
    {
    
        printf("O valor respectivo das 5 prestações (sem juros) a pagar são: %2.f", total);
        
    }
}
