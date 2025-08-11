#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    double c = 0.0;
    double d = 0.0;
    
    scanf("%d %d %lf", &a, &b, &c);
    d = b * c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", d);
    return 0;
}