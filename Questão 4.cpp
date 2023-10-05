#include <stdio.h>

int main() {
    float A, B, C;
    float maior, menor, medio;

    printf("Digite os valores dos lados do triângulo (A, B e C): ");
    scanf("%f %f %f", &A, &B, &C);

    // Encontre o maior, o menor e o lado do meio
    if (A >= B && A >= C) {
        maior = A;
        menor = B < C ? B : C;
        medio = B > C ? B : C;
    } else if (B >= A && B >= C) {
        maior = B;
        menor = A < C ? A : C;
        medio = A > C ? A : C;
    } else {
        maior = C;
        menor = A < B ? A : B;
        medio = A > B ? A : B;
    }

    // Verifique se os lados formam um triângulo
    if (menor + medio > maior) {
        // Os lados formam um triângulo

        // Use o Teorema de Pitágoras para verificar os ângulos
        if (maior * maior == menor * menor + medio * medio) {
            printf("É um triângulo retângulo.\n");
        } else if (maior * maior > menor * menor + medio * medio) {
            printf("É um triângulo obtusângulo.\n");
        } else {
            printf("É um triângulo acutângulo.\n");
        }
    } else {
        printf("Esses valores não podem formar um triângulo.\n");
    }

    return 0;
}
