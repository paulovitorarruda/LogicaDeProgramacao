#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Ola! Qual seu nome?\n");
    scanf("%s",&nome);

    printf("\nQual sua idade?\n",nome);
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...");

    printf("a primeira letra do seu nome e: %c",nome[0]);

    if(idade >= 18){
        printf("\nVoce e adulto!");
    }else if(idade >= 12){
        printf("\nVoce e adolescente!");
    }else{
        printf("\nVoce e crianca!");
    }

    return 0;
}
