#include<stdio.h>
#include<stdlib.h>

int n1, n2;

int main()
{
    printf("Digite um numero:");
    scanf("%d", &n1);
    
    printf("Digite um numero:");
    scanf("%d", &n2);
    
    if(n1==n2)
    {
    
         printf("Os números são iguais.");
    
    }
    
    else
   
    { 
         printf("Os números não são iguais.");

    }
}