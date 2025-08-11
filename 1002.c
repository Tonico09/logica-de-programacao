#include <stdio.h>
 
int main() {
 
    // Declaracao de variaveis
    
    double raio = 0.0;
    double PI = 3.14159;
    double area = 0.0;
    
    scanf("%lf",&raio);
    area = PI * raio * raio;
    printf("A=%.4lf\n",area);
    
    return 0;
}