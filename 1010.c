#include <stdio.h>
 
int main() {
 
   int cod1 = 0;
   int cod2 = 0;
   int qnt1 = 0;
   int qnt2 = 0;
   double val1 = 0.0;
   double val2 = 0.0;
   double total = 0.0;
   
   scanf("%d %d %lf", &cod1, &qnt1, &val1);
   scanf("%d %d %lf", &cod2, &qnt2, &val2);
   total = (qnt1 * val1) + (qnt2 * val2);
   printf("VALOR A PAGAR: R$ %.2lf\n", total);
   
    return 0;
}