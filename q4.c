#include <stdio.h>

int nota_valida(float nota);
float ler_nota(int numero);
float calcular_media(float n1, float n2, float n3);
const char *situacao(float media);

int nota_valida(float nota) {
    return nota >= 0.0f && nota <= 10.0f;
}

float ler_nota(int numero) {
    float nota;
    do {
        printf("Digite a nota %d (0 a 10): ", numero);
        scanf("%f", &nota);
        if (!nota_valida(nota)) {
            printf("Nota invalida! Tente novamente.\n");
        }
    } while (!nota_valida(nota));
    return nota;
}

float calcular_media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0f;
}

const char *situacao(float media) {
    if (media >= 7.0f) return "Aprovado";
    if (media >= 4.0f) return "Recuperacao";
    return "Reprovado";
}

int main(void) {
    float n1 = ler_nota(1);
    float n2 = ler_nota(2);
    float n3 = ler_nota(3);

    float media = calcular_media(n1, n2, n3);

    printf("Media: %.2f\n", media);
    printf("Situacao: %s\n", situacao(media));

    // Testes diretos das funcoes
    printf("\n--- Testes ---\n");
    printf("nota_valida(10)   = %d\n", nota_valida(10));    // 1
    printf("nota_valida(-1)   = %d\n", nota_valida(-1));    // 0
    printf("nota_valida(10.5) = %d\n", nota_valida(10.5f)); // 0
    printf("media(8, 7, 6)    = %.2f -> %s\n", calcular_media(8, 7, 6), situacao(calcular_media(8, 7, 6)));
    printf("media(5, 4, 3)    = %.2f -> %s\n", calcular_media(5, 4, 3), situacao(calcular_media(5, 4, 3)));
    printf("media(2, 3, 1)    = %.2f -> %s\n", calcular_media(2, 3, 1), situacao(calcular_media(2, 3, 1)));
    return 0;
}