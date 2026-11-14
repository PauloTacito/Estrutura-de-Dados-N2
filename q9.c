#include <stdio.h>
double saldo_devedor(double saldo, double taxa, double pagamento, int meses) {
    if (saldo <= 0) {
        return 0.0;                       
    }
    if (meses == 0) {
        return saldo;                     
    }

    double juros = saldo * taxa;
    double novo_saldo = saldo + juros - pagamento;

    if (novo_saldo <= 0) {
        return 0.0;                       
    }

    return saldo_devedor(novo_saldo, taxa, pagamento, meses - 1);
}

int main(void) {
    double divida, taxa_percentual, pagamento;
    int meses;

    printf("Valor inicial da divida: R$ ");
    scanf("%lf", &divida);

    printf("Taxa de juros mensal (%%): ");
    scanf("%lf", &taxa_percentual);

    printf("Pagamento mensal: R$ ");
    scanf("%lf", &pagamento);

    printf("Numero de meses: ");
    scanf("%d", &meses);

    double taxa = taxa_percentual / 100.0;   // converte % para decimal
    double saldo_final = saldo_devedor(divida, taxa, pagamento, meses);

    printf("Saldo devedor apos %d meses: R$ %.2f\n", meses, saldo_final);
    return 0;
}