#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ordenacao.h"
 
#define N 100
 
static void copiar(int dst[], int src[], int n) {
    memcpy(dst, src, n * sizeof(int));
}
 
static int ordenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (v[i] > v[i + 1]) return 0;
    return 1;
}
 
int main() {
 
    int original[N], v[N];
    srand(42);
    for (int i = 0; i < N; i++) original[i] = rand() % 1000;
 
    clock_t inicio, fim;
    double tempo;
 
    copiar(v, original, N);
    inicio = clock();
    bubble_sort(v, N);
    fim    = clock();
    tempo  = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("bubble_sort:    tempo = %.6fs => %i\n", tempo, ordenado(v, N));
 
    copiar(v, original, N);
    inicio = clock();
    selection_sort(v, N);
    fim    = clock();
    tempo  = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("selection_sort: tempo = %.6fs => %i\n", tempo, ordenado(v, N));
 
    copiar(v, original, N);
    inicio = clock();
    quick_sort(v, N);
    fim    = clock();
    tempo  = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("quick_sort:     tempo = %.6fs => %i\n", tempo, ordenado(v, N));
 
    return 0;
}