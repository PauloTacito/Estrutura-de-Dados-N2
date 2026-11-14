#include <stdio.h>

// Versao recursiva
unsigned long long fatorial(int n) {
    if (n == 0) {
        return 1;                      
    }
    return n * fatorial(n - 1);        
}

// Versao iterativa
unsigned long long fatorial_iterativo(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void) {
    for (int n = 0; n <= 5; n++) {
        printf("%d! = %llu (recursivo) | %llu (iterativo)\n",
               n, fatorial(n), fatorial_iterativo(n));
    }
    return 0;
}