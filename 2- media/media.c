#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite três números: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("A média é: %.2f\n", media);
    return 0;
}
