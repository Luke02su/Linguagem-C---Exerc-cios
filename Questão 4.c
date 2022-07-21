#include<stdio.h>
#include<stdlib.h>

float C, F;

int main()
{
    printf("Digite uma temperatura em graus Celsius:");
    scanf("%f", &C);
    
    F = (9*C+160) / 5;
    
    {
    
        printf("A temperatura convertida em Fahrenheit eh: %2.f", F);
        
    }
}
    