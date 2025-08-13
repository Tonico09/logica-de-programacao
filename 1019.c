#include <stdio.h>
 
int main() {
 
    int n = 0;
    int h = 0;
    int m = 0;
    int s = 0;
    int r = 0;
    scanf("%d", &n);
    h = n / 3600;
    r = n % 3600;
    m = r / 60;
    s = r % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}