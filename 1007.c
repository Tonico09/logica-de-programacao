#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int result = 0;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    result = a * b - c * d;
    printf("DIFERENCA = %d\n", result);
    return 0;
}