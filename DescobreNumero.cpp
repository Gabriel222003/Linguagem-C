#include <stdio.h>
#include <stdlib.h>
#include <time.h>



main() {
    int numero_secreto, tentativa, tentativas_restantes = 10;
    srand(time(0)); 
    numero_secreto = rand() % 100 + 1; 

    printf("Bem-vindo ao jogo de adivinha! Tente adivinhar o numero secreto entre 1 e 100.\n");

    do {
        printf("Tentativas restantes: %d\n", tentativas_restantes);
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        if(tentativa < numero_secreto) {
            printf("Muito baixo. Tente novamente!\n");
        } else if(tentativa > numero_secreto) {
            printf("Muito alto. Tente novamente!\n");
        } else {
            printf("Parabens! Voce acertou o numero secreto %d!\n", numero_secreto);
            break;
        }

        tentativas_restantes--;

    } while(tentativas_restantes > 0);

    if(tentativas_restantes == 0) {
        printf("Suas tentativas acabaram. O numero secreto era: %d\n", numero_secreto);
    }


}

