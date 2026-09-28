#include <stdio.h>

int main() {
    char nome[50];

    printf("=================================\n");
    printf("   TESTE DE COMPILACAO EM C\n");
    printf("=================================\n\n");

    // Solicita uma entrada do usuario
    printf("Digite o seu primeiro nome: ");
    scanf("%49s", nome);

    printf("\nOla, %s! O seu compilador MSYS2 funcionou.\n", nome);
    printf("Iniciando contagem regressiva:\n");

    // Um loop simples para testar a lógica
    for(int i = 3; i > 0; i--) {
        printf("%d...\n", i);
    }

    printf("Sucesso! Tudo pronto para programar.\n");
    return 0;
}
