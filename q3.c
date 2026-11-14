#include <stdio.h>

int maior_de_tres(int a, int b, int c);   // protótipo

int main(void) {
    printf("maior_de_tres(3, 9, 5)    = %d\n", maior_de_tres(3, 9, 5));
    printf("maior_de_tres(7, 7, 2)    = %d\n", maior_de_tres(7, 7, 2));
    printf("maior_de_tres(-4, -9, -1) = %d\n", maior_de_tres(-4, -9, -1));
    return 0;
}

int maior_de_tres(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}