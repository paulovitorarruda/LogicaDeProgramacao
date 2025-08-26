#include <stdio.h>
#include <string.h>

int main()//PEDRA, PAPEL, TESOURA!
{
    char player1[20], player2[20];

    printf("Player 1, escolha (pedra, papel ou tesoura): ");
    scanf("%s", player1);

    printf("Player 2, escolha (pedra, papel ou tesoura): ");
    scanf("%s", player2);

    if (strcmp(player1, "papel") == 0) {
        if (strcmp(player2, "papel") == 0) {
            printf("Empate!\n");
        } else if (strcmp(player2, "tesoura") == 0) {
            printf("Player 2 ganhou, porque tesoura corta papel!\n");
        } else if (strcmp(player2, "pedra") == 0) {
            printf("Player 2 perdeu, porque papel embrulha pedra!\n");
        } else {
            printf("O Player 2 jogou uma informacao invalida.\n");
        }
    }
    else if (strcmp(player1, "tesoura") == 0) {
        if (strcmp(player2, "papel") == 0) {
            printf("Player 2 perdeu, porque tesoura corta papel!\n");
        } else if (strcmp(player2, "tesoura") == 0) {
            printf("Empate!\n");
        } else if (strcmp(player2, "pedra") == 0) {
            printf("Player 2 ganhou, porque pedra quebra tesoura!\n");
        } else {
            printf("O Player 2 jogou uma informacao invalida.\n");
        }
    }
    else if (strcmp(player1, "pedra") == 0) {
        if (strcmp(player2, "papel") == 0) {
            printf("Player 2 ganhou, porque papel embrulha pedra!\n");
        } else if (strcmp(player2, "tesoura") == 0) {
            printf("Player 2 perdeu, porque pedra quebra tesoura!\n");
        } else if (strcmp(player2, "pedra") == 0) {
            printf("Empate!\n");
        } else {
            printf("O Player 2 jogou uma informacao invalida.\n");
        }
    }
    else {
        printf("O Player 1 jogou uma informacao invalida.\n");
    }

    return 0;
}
