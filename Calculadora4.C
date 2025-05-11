#include <stdio.h> // Juan Arruda Costa RA: 22503887

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 0) {
        printf("Idade invalida. Por favor, digite um valor maior que zero.\n");
    } else {
        if (idade < 12) {
            printf("Voce e uma Crianca.\n");
        } else if (idade <= 17) {
            printf("Voce e um(a) Adolescente.\n");
        } else if (idade <= 59) {
            printf("Voce e um(a) Adulto(a).\n");
        } else {
            printf("Voce e um(a) Idoso(a).\n");
        }
    }

    return 0;
}
