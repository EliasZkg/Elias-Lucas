#include <stdio.h>

int main() {
    float salario, salario_total = 0;
    int num_filhos, num_pessoas = 0;
    float maior_salario = 0;
    int num_pessoas_ate_100 = 0;

    do {
        // Solicita o salário do habitante
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        // Verifica se o valor é negativo para encerrar a leitura
        if (salario < 0) {
            break;
        }

        // Solicita o número de filhos
        printf("Digite o número de filhos: ");
        scanf("%d", &num_filhos);

        // Soma o salário ao total
        salario_total += salario;

        // Verifica o maior salário
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        // Verifica se o salário é menor ou igual a R$100,00
        if (salario <= 100.0) {
            num_pessoas_ate_100++;
        }

        // Incrementa o número de pessoas
        num_pessoas++;

    } while (1); // Loop até que seja inserido um salário negativo

    // Verifica se pelo menos uma pessoa foi inserida
    if (num_pessoas > 0) {
        // Calcula a média do salário
        float media_salario = salario_total / num_pessoas;

        // Calcula a média do número de filhos
        float media_filhos = (float)num_filhos / num_pessoas;

        // Calcula o percentual de pessoas com salário até R$100,00
        float percentual_ate_100 = (float)num_pessoas_ate_100 / num_pessoas * 100;

        // Imprime os resultados
        printf("a) Média do salário da população: %.2f\n", media_salario);
        printf("b) Média do número de filhos: %.2f\n", media_filhos);
        printf("c) Maior salário: %.2f\n", maior_salario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentual_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
