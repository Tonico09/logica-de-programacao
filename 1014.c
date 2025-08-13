#include <stdio.h>
 
int main() {
 
    int k = 0;
    double l = 0.0;
    double t = 0.0;
    scanf("%d", &k);
    scanf("%lf", &l);
    t = k / l;
    printf("%.3lf km/l\n", t);
    return 0;
}