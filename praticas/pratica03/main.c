#include <stdio.h>
#include "conta.h"
 
int main() {
 
    Conta c = conta_criar(1000, 0.0f);
 
    conta_depositar(c, 1000.0f);
    printf("deposito: valor = 1000.0, saldo = %.1f => %i\n", conta_ver_saldo(c), conta_ver_saldo(c) == 1000.0f);
 
    conta_depositar(c, 500.0f);
    printf("deposito: valor = 500.0,  saldo = %.1f => %i\n", conta_ver_saldo(c), conta_ver_saldo(c) == 1500.0f);
 
    int ok = conta_sacar(c, 200.0f);
    printf("saque:    valor = 200.0,  saldo = %.1f => %i\n", conta_ver_saldo(c), ok == 1 && conta_ver_saldo(c) == 1300.0f);
 
    ok = conta_sacar(c, 9999.0f);
    printf("saque:    valor = 9999.0, saldo = %.1f => %i\n", conta_ver_saldo(c), ok == 0 && conta_ver_saldo(c) == 1300.0f);
 
    conta_destruir(c);
 
    return 0;
}