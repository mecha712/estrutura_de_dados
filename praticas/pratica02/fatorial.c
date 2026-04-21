#include <stdio.h>
 
long long fatorial_iterativo(int n) {
    if (n < 0) return -1;
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
 
long long fatorial_recursivo(int n) {
    if (n < 0) return -1;
    if (n <= 1) return 1;
    return n * fatorial_recursivo(n - 1);
}
 
int main() {
 
    long long fatorial = 0;
 
    fatorial = fatorial_iterativo(0);
    printf("iterativo: n = 0, fat = %lld => %i\n", fatorial, fatorial == 1);
 
    fatorial = fatorial_iterativo(5);
    printf("iterativo: n = 5, fat = %lld => %i\n", fatorial, fatorial == 120);
 
    fatorial = fatorial_iterativo(10);
    printf("iterativo: n = 10, fat = %lld => %i\n", fatorial, fatorial == 3628800);
 
    fatorial = fatorial_recursivo(0);
    printf("recursivo: n = 0, fat = %lld => %i\n", fatorial, fatorial == 1);
 
    fatorial = fatorial_recursivo(5);
    printf("recursivo: n = 5, fat = %lld => %i\n", fatorial, fatorial == 120);
 
    fatorial = fatorial_recursivo(10);
    printf("recursivo: n = 10, fat = %lld => %i\n", fatorial, fatorial == 3628800);
 
    return 0;
}