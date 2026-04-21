#include <stdio.h>

float calc_potencia(float base, float expoente) {
    if (expoente < 0.0f) {
        return 0.0f;
    }

    float resultado = 1.0f;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}
// 5, 0/ 3, 4/ 2, -1
int main () {

float resultado = 0.0f;

resultado = calc_potencia(2.0f, 3.0f);
    printf("2^3 = %.1f => %i\n", resultado, resultado == 8);

resultado = calc_potencia(5.0f, 0.0f);
    printf("5^0 = %.1f => %i\n", resultado, resultado == 1);

resultado = calc_potencia(3.0f, 4.0f);
    printf("3^4 = %.1f => %i\n", resultado, resultado == 81);

resultado = calc_potencia(2.0f, -1.0f);
    printf("2^-1 = %.1f => %i\n", resultado, resultado == 0);

    return 0;
}