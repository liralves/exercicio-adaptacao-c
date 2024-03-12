#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, x, y;

    printf("informe o valor de A: ");
    scanf("%f", &a);
    printf("informe o valor de B: ");
    scanf("%f", &b);
    printf("informe o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
    printf("Não existe raiz.\n");
    } else if (delta == 0) {
    x = (-b - sqrt(delta)) / (2 * a);
    printf("A raiz é %.2f\n", x);
    } else {
    x = (-b - sqrt(delta)) / (2 * a);
    y = (-b + sqrt(delta)) / (2 * a);
    printf("As raízes são %.2f e %.2f\n", x, y);
    }

return 0;

}
