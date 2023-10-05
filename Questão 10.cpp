#include <stdio.h>

int main() {
    int codigo_cidade;
    char estado[3];
    int num_veiculos, num_acidentes;
    int maior_acidente = 0, menor_acidente = -1;
    char cidade_maior_acidente[50], cidade_menor_acidente[50];
    int total_veiculos = 0, total_acidentes_rs = 0;
    int num_cidades_rs = 0;

    for (int i = 0; i < 200; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo_cidade);

        if (codigo_cidade == 0) {
            break;
        }

        printf("Digite o estado da cidade (2 letras): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%d", &num_veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &num_acidentes);

        // Verifica maior e menor índice de acidentes e as cidades correspondentes
        if (num_acidentes > maior_acidente || maior_acidente == 0) {
            maior_acidente = num_acidentes;
            strcpy(cidade_maior_acidente, estado);
        }

        if (num_acidentes < menor_acidente || menor_acidente == -1) {
            menor_acidente = num_acidentes;
            strcpy(cidade_menor_acidente, estado);
        }

        // Calcula a média de veículos nas cidades brasileiras
        total_veiculos += num_veiculos;

        // Calcula a média de acidentes com vítimas entre as cidades do Rio Grande do Sul
        if (strcmp(estado, "RS") == 0) {
            total_acidentes_rs += num_acidentes;
            num_cidades_rs++;
        }
    }

    // Imprime os resultados
    printf("a) Maior índice de acidentes de trânsito: %d (Cidade: %s)\n", maior_acidente, cidade_maior_acidente);
    printf("   Menor índice de acidentes de trânsito: %d (Cidade: %s)\n", menor_acidente, cidade_menor_acidente);
    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", (float)total_veiculos / 200);
    
    if (num_cidades_rs > 0) {
        printf("c) Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", (float)total_acidentes_rs / num_cidades_rs);
    } else {
        printf("c) Não há cidades do Rio Grande do Sul na amostra.\n");
    }

    return 0;
}
