#include<stdio.h>
#include<stdlib.h>

int main()
{

    int i=0, idade;
    
    while(i<75)
   {
    
      {
           printf("\nDigite uma idade:");
           scanf("%d", &idade);
      }
 
      if(idade>=18)
      {
             printf("Maior de idade.\n");
      }
    
      else 
      {
             printf("Menor de idade.\n");
       }
    
    i++;
    
    }
   
 }
    