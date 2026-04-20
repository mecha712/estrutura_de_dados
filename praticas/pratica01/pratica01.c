#include <stdio.h>

float calcular_imc(float altura, float peso) {
    if (altura <= 0.0f || peso <= 0.0f) {
        return 0.0f;
    }
    return peso / (altura * altura);
}



int main () {

    float imc = 0.0f;

    imc = calcular_imc(0.0f, 50.0f);
    printf("altura = 0, peso = 50, imc = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(1.75f, 0.0f);
    printf("altura = 1.75, peso = 0, imc = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(1.75f, 50.0f);
    printf("altura = 1.75, peso = 50, imc = %.1f => %i\n", imc, imc == 0);







    printf("peso:/n");
    scanf("%f", &peso);

    printf("altura:");
    scanf("%f", &altura);

    if (peso <= 0) return 0;


    if (altura <= 0) return 0;
    
    imc = peso / (altura * altura);

printf("O seu imc é de: %.2f", imc);

    if(imc < 18.5) {
        printf("abaixo do peso");
    }

    if(imc >= 18.5 && imc <25.0) {
        printf("peso normal");
    }

    if(imc >= 25.0 && imc < 30.0) {
        printf("sobrepeso");
    }

    if(imc > 30.0) {
        printf("obesidade");
    }


    return 0;
}