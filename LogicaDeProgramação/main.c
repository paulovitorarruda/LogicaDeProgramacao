#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A palavra-chave (int) � um tipo de dado que armazena n�meros inteiros.
    int ano_nascimento = 2003;
    int ano_atual = 2025;

    int resultado = (ano_atual - ano_nascimento);

    // (%d) � um especificador de formato usado com fun��es de entrada e sa�da
    printf("O Paulo tem %d anos",resultado);

    return 0;
}
