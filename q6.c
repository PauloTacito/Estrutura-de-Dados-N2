#include <stdio.h>

int soma_ate(int n) {
    if (n <= 0) {
        return 0;               
    }
    return n + soma_ate(n - 1); 
}

int soma_ate_iterativa(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main(void) {
    printf("Recursiva:  soma_ate(4) = %d\n", soma_ate(4));            
    printf("Iterativa:  soma_ate_iterativa(4) = %d\n", soma_ate_iterativa(4)); 
    return 0;
}