#include <stdio.h>

double raizQuadrada(double n) {
    if (n < 0) return -1;
    double x = n;
    double y = 1.0;
    double e = 0.000001;

    while (x - y > e) {
        x = (x + y) / 2.0;
        y = n / x;
    }

    return x;
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = b*b - 4*a*c;

    if (a == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        double raizDelta = raizQuadrada(delta);

        double R1 = (-b + raizDelta) / (2*a);
        double R2 = (-b - raizDelta) / (2*a);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}
