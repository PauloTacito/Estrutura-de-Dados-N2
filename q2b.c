#include <stdio.h>

void mostrar_dobro(int n) {
    printf("%d\n", 2 * n);
}

int calcular_dobro(int n) {
    return 2 * n;
}

int main(void) {
    mostrar_dobro(5);                 
    int d = calcular_dobro(5);      
    printf("%d\n", d);
    return 0;
}