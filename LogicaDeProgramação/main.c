#include <stdio.h>
#include <stdlib.h>

int main()
{
    // O tipo de dado (char) é usado para armazenar um único caractere.
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nShow de bola, %s... Qual sua idade?\n",nome);
    scanf("%d",&idade);

    printf("\nMuito bom! O %s tem %d anos\n",nome,idade);

    printf("\nQual o seu sobrenome?\n",sobrenome);
    scanf("%s",sobrenome);

    printf("\nBonito o seu sobrenome! %s %s\n",nome,sobrenome);

    printf("\nQual seu ano de nascimento?\n");
    scanf("%d",ano_nascimento);


    return 0;
}
