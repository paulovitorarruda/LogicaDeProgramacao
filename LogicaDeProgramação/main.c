#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Incluir a biblioteca

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Configurar para Português

    // A função printf() grava uma string formatada no console.
    printf("Hello world!\n");
    printf("Olá mundo com acentuação!\n");

    // A palavra-chave return finaliza a execução de uma função e pode ser usada para retornar um valor de uma função.
    return 0;
}
