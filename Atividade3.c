#include <stdio.h>
int main() {
    float notas1;
    float notas2;
    int  i ;
    for (size_t i = 0; i < 3; i++)
    {
        printf("\n ---aluno %d ---\n ", i+1 );
        printf("Digite a variavel nota1");
        scanf ("%f",&notas1[i]);
        printf("Digite a variavel nota2");
        scanf("%f", &notas2 [i]);
        medias[i] = (&notas1[i] + &notas2[i])/2.0;
 printf("Media do Aluno %d: %.2f\n", i + 1, medias[i]);
    }
    

}



