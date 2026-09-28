#include <stdio.h>

int main(void) {
    int angulo1, angulo2, angulo3;

    printf("Digite o angulo1: ");
    scanf("%d", &angulo1);

    printf("Digite o angulo2: ");
    scanf("%d", &angulo2);

    printf("Digite o angulo3: ");
    scanf("%d", &angulo3);

    if (angulo1 <= 0 || angulo2 <= 0 || angulo3 <= 0 || angulo1 + angulo2 + angulo3 != 180)
    {
    printf("Os lados nao formam um triangulo.\n");
    } else if (angulo1 == angulo2 && angulo2 == angulo3) {
        printf("Formara um triangulo equilatero\n");
    } else if (angulo1 == angulo2 || angulo1 == angulo3 || angulo2 == angulo3) {
        printf("Formara um triangulo isosceles\n");
    } else {
        printf("Formara um triangulo escaleno\n");
    }
    if (angulo1==90 || angulo2==90 ||   angulo3==90) {
        printf("Triangulo retangulo\n");
    }
    else if (angulo1<90  && angulo2<90 && angulo3 <90) {
        printf("Angulo acutangulo \n");
    }
    else {
        printf("Angulo obtuso \n");
    }
    
    

    return 0;
}
