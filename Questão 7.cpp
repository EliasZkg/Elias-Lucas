#include <stdio.h>

int main() {
    int num_alunos = 30;
    float notas[num_alunos];
    float media_geral = 0.0;

    // Loop para ler as notas dos alunos e calcular as médias
    for (int i = 0; i < num_alunos; i++) {
        float n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &n1, &n2, &n3);

        float media_ponderada = (n1 * 2 + n2 * 4 + n3 * 4) / 10;
        notas[i] = media_ponderada;

        media_geral += media_ponderada;

        printf("Média do aluno %d: %.2f ", i + 1, media_ponderada);

        if (media_ponderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    // Calculando a média geral da turma
    media_geral /= num_alunos;

    printf("Média geral da turma: %.2f\n", media_geral);

    return 0;
}

