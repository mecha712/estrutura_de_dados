#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
 
struct conta_t {
    int   numero;
    float saldo;
};
 
Conta conta_criar(int numero, float saldo_inicial) {
    Conta c = malloc(sizeof(struct conta_t));
    c->numero = numero;
    c->saldo  = saldo_inicial;
    return c;
}
 
void conta_depositar(Conta c, float valor) {
    if (valor > 0.0f) c->saldo += valor;
}
 
int conta_sacar(Conta c, float valor) {
    if (valor <= 0.0f || valor > c->saldo) return 0;
    c->saldo -= valor;
    return 1;
}
 
float conta_ver_saldo(Conta c) {
    return c->saldo;
}
 
void conta_destruir(Conta c) {
    free(c);
}