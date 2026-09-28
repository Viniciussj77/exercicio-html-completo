#include <stdio.h>

int main(void) {
    int A, B, C;
    int maior, menor, intermediario;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) {
        maior = A;
    } else if (B >= A && B >= C) {
        maior = B;
    } else {
        maior = C;
    }

    if (A <= B && A <= C) {
        menor = A;
    } else if (B <= A && B <= C) {
        menor = B;
    } else {
        menor = C;
    }

    if ((A >= B && A <= C) || (A <= B && A >= C)) {
        intermediario = A;
    } else if ((B >= A && B <= C) || (B <= A && B >= C)) {
        intermediario = B;
    } else {
        intermediario = C;
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Valor intermediario: %d\n", intermediario);

    if (A == B || A == C || B == C) {
        printf("Existem valores repetidos.\n");
    } else {
        printf("Nao existem valores repetidos.\n");
    }

    if (A == B && B == C) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Os tres valores nao sao iguais.\n");
    }

    if (A <= B && B <= C) {
        printf("Estao em ordem crescente.\n");
    } else {
        printf("Nao estao em ordem crescente.\n");
    }

    if (A >= B && B >= C) {
        printf("Estao em ordem decrescente.\n");
    } else {
        printf("Nao estao em ordem decrescente.\n");
    }

    return 0;
}