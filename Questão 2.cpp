#include <stdio.h>

int main() {
    float altura_chico = 1.50; // Altura inicial de Chico em metros
    float altura_ze = 1.10;   // Altura inicial de Zé em metros
    int anos = 0;             // Contador de anos

    // Enquanto Zé for menor ou igual a Chico, continue crescendo ambos
    while (altura_ze <= altura_chico) {
        altura_chico += 0.02; // Chico cresce 2 centímetros por ano (0.02 metros)
        altura_ze += 0.03;   // Zé cresce 3 centímetros por ano (0.03 metros)
        anos++;              // Incrementa o contador de anos
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}
