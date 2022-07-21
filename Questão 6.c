#include<stdio.h>
#include<stdlib.h>

int n1, n2, n3;

int main()
{
     printf("OBS.: Não digite o mesmo número mais de uma vez pois isto interromperá a execução correta da função.\n");

     printf("\nDigite o primeiro número inteiro:");
     scanf("%d", &n1);
    
     printf("Digite o segundo número inteiro:");
     scanf("%d", &n2);
    
     printf("Digite o terceiro número inteiro:");
     scanf("%d", &n3);
     
     printf("\nOrdem crescente:\n");

     if(n1<n2 && n2<n3)
       {
    
         printf("\nPrimeiro (menor):%d\n", n1);
         printf("Segundo (intermédio):%d\n",n2);
         printf("Terceiro (maior):%d\n", n3);
        
        }
    
     if(n2<n1 && n1<n3)
      {
    
        printf("\nPrimeiro (menor):%d\n", n2);
        printf ("Segundo (intermédio):%d\n", n1);
        printf("Terceiro (maior):%d\n", n3);
 
       }
    
    if (n1<n3 && n3<n2)
       {
    
        printf("\nPrimeiro (menor):%d\n", n1);
        printf("Segundo (intermédio):%d\n", n3);
        printf("Terceiro (maior):%d\n", n2);
 
       }
    
    if(n2<n3 && n3<n1)
       {
    
        printf("\nPrimeiro (menor):%d\n", n2);
        printf("Segundo (intermédio):%d\n", n3);
        printf("Terceiro (maior):%d\n", n1);
  
       }
    
    if(n3<n1 && n3<n2)
       {
    
        printf("\nPrimeiro (menor):%d\n", n3);
        printf("Segundo (intermédio):%d\n", n1);
        printf("Terceiro (maior): %d\n", n2);
     
       }
    
    if(n3<n2 && n2<n1)
      {
    
        printf("\nPrimeiro (menor):%d\n", n3);
        printf("Segundo (intermédio):%d\n", n2);
        printf("Terceiro (maior):%d\n", n1);
        
        printf("\n(CONSIDERE ESTA ÚLTIMA ANÁLISE COMO CERTA!)");
       }
      
 }
    