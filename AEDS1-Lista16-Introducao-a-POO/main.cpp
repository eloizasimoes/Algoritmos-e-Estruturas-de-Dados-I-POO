// FUNCAO PRINCIPAL

int main() {

    Triangulo triangulos[3];

    float a, b, c;

    // CADASTRO DOS TRIANGULOS

    for (int i = 0; i < 3; i++) {

        do {
            printf("\nDigite os tres lados do triangulo %d: ", i + 1);

            scanf("%f %f %f", &a, &b, &c);

            if (!triangulos[i].setLados(a, b, c)) {
                printf("Triangulo invalido! Tente novamente.\n");
            }

        } while (!triangulos[i].ehValido());
    }

    // LISTAGEM DE TODOS OS TRIANGULOS

    printf("\n===== TRIANGULOS CADASTRADOS =====\n");

    for (int i = 0; i < 3; i++) {

        printf("\nTriangulo %d\n", i + 1);

        printf("Lado A: %.2f\n", triangulos[i].getLadoA());
        printf("Lado B: %.2f\n", triangulos[i].getLadoB());
        printf("Lado C: %.2f\n", triangulos[i].getLadoC());

        printf("Perimetro: %.2f\n",
               triangulos[i].getPerimetro());
    }

    // LISTAGEM DOS TRIANGULOS EQUILATEROS

    printf("\n===== TRIANGULOS EQUILATEROS =====\n");

    for (int i = 0; i < 3; i++) {

        if (triangulos[i].ehEquilatero()) {
            printf("Triangulo %d\n", i + 1);
        }
    }

    return 0;
}
