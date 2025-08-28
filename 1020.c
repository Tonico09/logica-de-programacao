#include <stdio.h>
 
int main() {
 
    int total = 0, ano = 0, mes = 0, dia = 0, resto = 0;
    scanf("%d", &total);
    ano = total / 365;
    resto = total % 365;
    mes = resto / 30;
    dia = resto % 30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
 
    return 0;
}