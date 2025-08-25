#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    int hora_validada = hora_cinema + 30;

    // if e else — para tomar decisões
    // if = “Se...”
    // else = “Se não...”
    if(hora_atual > hora_validada){
        printf("Passou do tempo limite! Nao pode entrar");
    }else if(hora_atual > hora_cinema - 30){
        printf("Nem abriu a porta do cinema");
    }else{
        printf("O horario esta certo! Pode entrar!");
    }

    return 0;
}
