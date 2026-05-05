#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("================================\n");
    printf("Bem-vindo ao jogo de adivinhação\n");
    printf("================================\n\n");

    int i;
    int numerosecreto = rand() % 100;
    int chute, acertou;
    int ganhou = 0;
    int tentativas = 1;
    double pontos = 1000;
    double pontosperdidos;

    int num;
    int nivel;

    printf("Escolha o nível de dificuldade:\n");
    printf("(1) Fácil (20 tentativas)\n");
    printf("(2) Médio (15 tentativas)\n");
    printf("(3) Difícil (6 tentativas)\n");
    printf("Opção: ");
    scanf("%d", &nivel);

    if(nivel == 1) {
        num = 20;
    } else if(nivel == 2) {
        num = 15;
    } else if(nivel == 3) {
        num = 6;
    } else {
        printf("Opção inválida! Usando nível fácil por padrão.\n");
        num = 20;
    }

    for(i = 0; i < num; i++) {

        printf("Qual é o seu %dº chute? ", tentativas);
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Você não pode chutar valores negativos\n\n");
            continue;
        }

        printf("Seu %dº chute foi %d\n", tentativas, chute);

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns, você acertou!\n");
            ganhou = 1;
            break;

        } else if(maior) {
            printf("Seu chute foi maior que o número secreto\n\n");
        } else {
            printf("Seu chute foi menor que o número secreto\n\n");
        }

        int diferenca = chute - numerosecreto;
        pontosperdidos = abs(diferenca) / 2.0;

        pontos -= pontosperdidos;

        printf("Pontos perdidos: %.2f\n", pontosperdidos);
        printf("Pontos atuais: %.2f\n\n", pontos);

        tentativas++;
    }

    if(!ganhou) {
        printf("Você perdeu! O número secreto era %d\n", numerosecreto);
    }

    printf("Fim de jogo! Pontos finais: %.2f\n", pontos);

    return 0;
}return 0;
}
