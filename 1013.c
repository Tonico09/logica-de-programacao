#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    int c = 0;
    int maior = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        maior = a; 
    }
    else
    {
        maior = b;
    }
    if(c > maior)
    {
        maior = c;
    }
    printf("%d eh o maior\n", maior);
    return 0;
}