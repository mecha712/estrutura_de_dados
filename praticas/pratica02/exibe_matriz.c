#include <stdio.h>
#include <time.h>
 
#define N 10
 
void percorrer_dois_lacos(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            (void)matriz[i][j];
        }
    }
}
 
void percorrer_um_laco(int matriz[N][N]) {
    int *p = &matriz[0][0];
    for (int k = 0; k < N * N; k++) {
        (void)p[k];
    }
}
 
int main() {
 
    int matriz[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matriz[i][j] = i * N + j;
 
    clock_t inicio, fim;
    double tempo_dois_lacos, tempo_um_laco;
 
    inicio = clock();
    percorrer_dois_lacos(matriz);
    fim = clock();
    tempo_dois_lacos = (double)(fim - inicio) / CLOCKS_PER_SEC;
 
    inicio = clock();
    percorrer_um_laco(matriz);
    fim = clock();
    tempo_um_laco = (double)(fim - inicio) / CLOCKS_PER_SEC;
 
    printf("dois lacos: tempo = %.6fs => %i\n", tempo_dois_lacos, tempo_dois_lacos >= 0.0);
    printf("um laco:    tempo = %.6fs => %i\n", tempo_um_laco,    tempo_um_laco    >= 0.0);
 
    return 0;
}