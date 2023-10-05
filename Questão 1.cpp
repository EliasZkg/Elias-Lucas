#include <stdio.h>

int main() {
    double x;
    double resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    // Verifica se o denominador não é zero
    if (x * x - 16 < 0) {
        printf("O valor de x resultaria em uma raiz negativa. A função não está definida para este valor de x.\n");
    } else {
        // Calcula f(x)
        resultado = (5 * x + 3) / sqrt(x * x - 16);

        // Imprime o resultado
        printf("O valor de f(x) é: %.2lf\n", resultado);
    }

    return 0;
}
