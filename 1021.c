#include <stdio.h>
 
int main() {
 
    double valor = 0; 
    int centavos = 0;
    int cem, cinquenta, vinte, dez, cinco, dois;
    int umreal, cinquentinha, vinte_cinco, dezinho, cinquinho, um;
    scanf("%lf", &valor);
    
    centavos = (int)(valor * 100 + 0.5);
    
    cem = centavos / 10000;
    centavos = centavos % 10000;
    
    cinquenta = centavos / 5000;
    centavos = centavos % 5000;
    
    vinte = centavos / 2000;
    centavos = centavos % 2000;
    
    dez = centavos / 1000;
    centavos = centavos % 1000;
    
    cinco = centavos / 500;
    centavos = centavos % 500;
    
    dois = centavos / 200;
    centavos = centavos % 200;
    
    umreal = centavos / 100;
    centavos = centavos % 100;
    
    cinquentinha = centavos / 50;
    centavos = centavos % 50;
    
    vinte_cinco = centavos / 25;
    centavos = centavos % 25;
    
    dezinho = centavos / 10;
    centavos = centavos % 10;
    
    cinquinho = centavos / 5;
    centavos = centavos % 5;
    
    um = centavos / 1;
    centavos = centavos % 1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", umreal); 
    printf("%d moeda(s) de R$ 0.50\n", cinquentinha);
    printf("%d moeda(s) de R$ 0.25\n", vinte_cinco);
    printf("%d moeda(s) de R$ 0.10\n", dezinho);
    printf("%d moeda(s) de R$ 0.05\n", cinquinho);
    printf("%d moeda(s) de R$ 0.01\n", um);
    
    return 0;
}