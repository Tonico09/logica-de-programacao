#include <stdio.h>
#include <math.h>
int main() {
 
    double x1, y1, x2, y2, distancia;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    double dx = x2 - x1;
    double dy = y2 - y1;
    distancia = sqrt(dx * dx + dy *dy);
    printf("%.4lf\n", distancia);
    return 0;
}