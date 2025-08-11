#include <stdio.h>
 
int main() {
 
    // declaração de variáveis
    char nome[20];
    double salario = 0.0;
    double vendas = 0.0;
    double final = 0.0;
    
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    
    final = salario+(0.15*vendas);
    printf("TOTAL = R$ %.2lf\n", final);
    
    
    return 0;
}