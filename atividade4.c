#include <stdio.h>

#define LIMITE 100000

int main(void) {
    int notas[6] = {200, 100, 50, 20, 10, 5};
    int estoque[6];
    int resultado[6] = {0};
    int saque;

    static int possivel[7][LIMITE + 1];
    static int anterior[7][LIMITE + 1];
    static int usado[7][LIMITE + 1];

    for (int i = 0; i < 6; i++) {
        printf("Quantidade de notas de R$ %d: ", notas[i]);
        scanf("%d", &estoque[i]);

        if (estoque[i] < 1) {
            printf("Deve existir pelo menos uma nota de cada denominacao.\n");
            return 1;
        }
    }

    printf("Valor do saque: R$ ");
    scanf("%d", &saque);

    if (saque <= 0 || saque > LIMITE || saque % 5 != 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    possivel[0][0] = 1;

    for (int i = 0; i < 6; i++) {
        int disponiveis = estoque[i] - 1;

        for (int valor = 0; valor <= saque; valor++) {
            if (!possivel[i][valor]) {
                continue;
            }

            for (int quantidade = 0;
                 quantidade <= disponiveis;
                 quantidade++) {

                int novoValor = valor + quantidade * notas[i];

                if (novoValor <= saque &&
                    !possivel[i + 1][novoValor]) {

                    possivel[i + 1][novoValor] = 1;
                    anterior[i + 1][novoValor] = valor;
                    usado[i + 1][novoValor] = quantidade;
                }
            }
        }
    }

    if (!possivel[6][saque]) {
        printf("Nao e possivel realizar o saque.\n");
        return 0;
    }

    int valorAtual = saque;
    int totalCedulas = 0;

    for (int i = 5; i >= 0; i--) {
        resultado[i] = usado[i + 1][valorAtual];
        totalCedulas += resultado[i];
        valorAtual = anterior[i + 1][valorAtual];
    }

    printf("\nSaque realizado com sucesso!\n");

    for (int i = 0; i < 6; i++) {
        printf("Notas de R$ %d: %d\n", notas[i], resultado[i]);
    }

    printf("Total de cedulas: %d\n", totalCedulas);

    return 0;
}