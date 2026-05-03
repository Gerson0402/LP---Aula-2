#include <stdio.h>

int main() {

    float dolar = 5.22;
    float quant_reais = 50.00;
    float total = quant_reais / dolar;

        printf("Com R$ 50.00 podemos comprar %.2f dolares", total);
        
    return 0;
}