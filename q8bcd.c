#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_iterativo(int n) {
    if (n == 0) return 0;
    int anterior = 0, atual = 1;
    for (int i = 2; i <= n; i++) {
        int prox = anterior + atual;
        anterior = atual;
        atual = prox;
    }
    return atual;
}

long long fibonacci_ll(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_ll(n - 1) + fibonacci_ll(n - 2);
}

long long fibonacci_iterativo_ll(int n) {
    if (n == 0) return 0;
    long long anterior = 0, atual = 1;
    for (int i = 2; i <= n; i++) {
        long long prox = anterior + atual;
        anterior = atual;
        atual = prox;
    }
    return atual;
}

int main(void) {
    int n = 47;
    clock_t ini;
    double tempo;

    ini = clock();
    int r1 = fibonacci(n);
    tempo = (double)(clock() - ini) / CLOCKS_PER_SEC;
    printf("Recursiva (int):        fib(%d) = %d | %.3f s\n", n, r1, tempo);

    // (c) iterativa com int
    ini = clock();
    int r2 = fibonacci_iterativo(n);
    tempo = (double)(clock() - ini) / CLOCKS_PER_SEC;
    printf("Iterativa (int):        fib(%d) = %d | %.6f s\n", n, r2, tempo);

    // (d) iterativa com long long
    ini = clock();
    long long r3 = fibonacci_iterativo_ll(n);
    tempo = (double)(clock() - ini) / CLOCKS_PER_SEC;
    printf("Iterativa (long long):  fib(%d) = %lld | %.6f s\n", n, r3, tempo);

    // (d) recursiva com long long
    ini = clock();
    long long r4 = fibonacci_ll(n);
    tempo = (double)(clock() - ini) / CLOCKS_PER_SEC;
    printf("Recursiva (long long):  fib(%d) = %lld | %.3f s\n", n, r4, tempo);

    return 0;
}