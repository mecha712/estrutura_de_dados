#include <stdio.h>

int calcular_notas(int valor, int *n200, int *n100, int *n50, int *n20, int *n10, int *n5, int *n2) {
if (valor <= 0 || valor > 1000) {
return 0;
}

*n200 = valor / 200;
valor %= 200;

*n100 = valor / 100;
valor %= 100;

*n50 = valor / 50;
valor %= 50;

*n20 = valor / 20;
valor %= 20;

*n10 = valor / 10;
valor %= 10;

*n5 = valor / 5;
valor %= 5;

*n2 = valor / 2;

return 1;

}

int main() {

int n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;
int resultado = 0;

resultado = calcular_notas(376, &n200, &n100, &n50, &n20, &n10, &n5, &n2);
printf("376 => %i\n", resultado && n200==1 && n100==1 && n50==1 && n20==1 && n5==1);

resultado = calcular_notas(400, &n200, &n100, &n50, &n20, &n10, &n5, &n2);
printf("400 => %i\n", resultado && n200==2);

resultado = calcular_notas(1200, &n200, &n100, &n50, &n20, &n10, &n5, &n2);
printf("1200 => %i\n", resultado == 0);

return 0;
}