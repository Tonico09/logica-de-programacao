#include <stdio.h>
 
int main() {
 
    int t = 0;
    int v = 0;
    int d = 0;
    double l = 0.0;
    scanf("%d %d", &t, &v);
    d = t * v;
    l = d / 12.0;
    printf("%.3lf\n", l);
    return 0;
}