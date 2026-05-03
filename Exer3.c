#include <stdio.h>
    int main() {
    int quant = 5;
    float preco_unit = 15.00;
    float total = quant * preco_unit;

        printf("Produto: Caderno\n");
        printf("Quantidade: %d\n", quant);
        printf("Preco por unidade: R$ %.2f\n", preco_unit);
        printf("O valor total e: R$ %.2f\n", total);
        
        return 0;
}