#include <stdio.h>

float media_aritmetica(float numeros[], int n){
    if (n <= 0 || n > 100) {
        return 0.0f;
    }
    
    float soma = 0.0f;

    for(int i = 0; i < n; i++){
        soma += numeros[i];
    }
    return soma / n;
}

int main (){

  
float resultado = 0.0f;

float numeros1[] = {2, 4, 6};
resultado = media_aritmetica(numeros1, 3);
printf("media de {2,4,6} = %.1f => %i\n", resultado, resultado == 4);

float numeros2[] = {10, 10, 10, 10};
resultado = media_aritmetica(numeros2, 4);
printf("media de {10,10,10,10} = %.1f => %i\n", resultado, resultado == 10);

float numeros3[] = {5, 7};
resultado = media_aritmetica(numeros3, 2);
printf("media de {5,7} = %.1f => %i\n", resultado, resultado == 6);

float numeros4[] = {20, 80};
resultado = media_aritmetica(numeros4, 2);
printf("media de {20,80} = %.1f => %i\n", resultado, resultado == 50);

    return 0;
}