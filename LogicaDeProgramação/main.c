#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Incluir a biblioteca

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Configurar para Portugu�s

    // A fun��o printf() grava uma string formatada no console.
    printf("Hello world!\n");
    printf("Ol� mundo com acentua��o!\n");

    // A palavra-chave return finaliza a execu��o de uma fun��o e pode ser usada para retornar um valor de uma fun��o.
    return 0;
}
