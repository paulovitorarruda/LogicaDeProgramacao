#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A palavra-chave (int) é um tipo de dado que armazena números inteiros.
    int ano_nascimento = 2003;
    int ano_atual = 2025;

    int resultado = (ano_atual - ano_nascimento);

    // (%d) é um especificador de formato usado com funções de entrada e saída
    printf("O Paulo tem %d anos",resultado);

    return 0;
}
