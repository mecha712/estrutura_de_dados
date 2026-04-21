#include <stdio.h>
 
int busca_sequencial(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) return i;
    }
    return -1;
}
 
int main() {
 
    int vetor[100];
    for (int i = 0; i < 100; i++) vetor[i] = i + 1;
 
    int pos = 0;
 
    pos = busca_sequencial(vetor, 100, 1);
    printf("busca: valor = 1,   pos = %i => %i\n", pos, pos == 0);
 
    pos = busca_sequencial(vetor, 100, 50);
    printf("busca: valor = 50,  pos = %i => %i\n", pos, pos == 49);
 
    pos = busca_sequencial(vetor, 100, 100);
    printf("busca: valor = 100, pos = %i => %i\n", pos, pos == 99);
 
    pos = busca_sequencial(vetor, 100, 200);
    printf("busca: valor = 200, pos = %i => %i\n", pos, pos == -1);
 
    return 0;
}