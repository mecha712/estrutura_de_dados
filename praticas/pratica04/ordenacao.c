#include "ordenacao.h"
 
void bubble_sort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int tmp  = v[j];
                v[j]     = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
}
 
void selection_sort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min]) min = j;
        }
        int tmp  = v[i];
        v[i]     = v[min];
        v[min]   = tmp;
    }
}
 
static void _quick(int v[], int esq, int dir) {
    if (esq >= dir) return;
    int pivo = v[dir], i = esq - 1;
    for (int j = esq; j < dir; j++) {
        if (v[j] <= pivo) {
            int tmp  = v[++i];
            v[i]     = v[j];
            v[j]     = tmp;
        }
    }
    int tmp      = v[i + 1];
    v[i + 1]     = v[dir];
    v[dir]       = tmp;
    _quick(v, esq, i);
    _quick(v, i + 2, dir);
}
 
void quick_sort(int v[], int n) {
    _quick(v, 0, n - 1);
}