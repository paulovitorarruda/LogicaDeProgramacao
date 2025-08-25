#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int limite = 10;

    // O loop while percorre um bloco de código
    // desde que uma condição especificada seja true
    while(contador <= limite){
        printf("Estamos no primeiro loop!\n");
        if(contador == 3)
        {
            int contador_2 = 5;
            while(contador_2 > 0){
                printf("Estamos no segundo loop!\n");
                contador_2--;
            }
        }
        contador++;
    }

    return 0;
}
