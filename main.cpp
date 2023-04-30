#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "portuguese");

    int numero_secreto, palpite, tentativas = 0;
    srand(time(NULL)); // gera uma semente aleat�ria para gerar o n�mero secreto
    numero_secreto = rand() % 100 + 1; // gera um n�mero aleat�rio entre 1 e 100
    printf("Adivinhe o n�mero secreto entre 1 e 100\n");

    do {
        printf("Palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numero_secreto) {
            printf("Palpite alto! Tente novamente.\n");
        } else if (palpite < numero_secreto) {
            printf("Palpite baixo! Tente novamente.\n");
        } else {
            printf("Parab�ns! Voc� acertou o n�mero secreto em %d tentativas.\n", tentativas);
        }

    } while (palpite != numero_secreto);

    return 0;
}

