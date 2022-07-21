#include<stdio.h>
#include<stdlib.h>

int n1;

int main()
{
    printf("Digite um numero:");
    scanf("%d", &n1);
    
  
    if(n1>85)
    {
    
         printf("O número digitado eh maior que 85.");
    
    }
    
    
    if(n1<25)
    { 
    
    
         printf("O número digitado eh menor que 25.");

    }
    
    if(n1==40)
    {
    
         printf("O número digitado eh igual a 40.");
    
    }
  
}