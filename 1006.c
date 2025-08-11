#include <stdio.h>
 
int main() {
 
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double d = 0.0;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (a * 2.0 + b * 3.0 + c * 5.0) / (2.0 + 3.0 + 5.0);
    printf("MEDIA = %.1lf\n", d);
    return 0;
}