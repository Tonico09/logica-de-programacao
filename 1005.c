#include <stdio.h>
 
int main() {
 
    // declaracao de variaveis
    double a = 3.5;
    double b = 7.5;
    double c = 0.0;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = (a * 3.5 + b * 7.5) / (3.5 + 7.5) ;
    printf("MEDIA = %.5lf\n", c);
 
    return 0;
}