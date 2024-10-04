#include <stdio.h>
#include <math.h>

double verziere(double x) {
    return sqrt(1 - (x * x)); // y = √(1 - x²) для круга радиусом 1
}

double lemniskate(double x) {
    return (x * x > 1) ? -1 : sqrt(1 - (x * x * x * x)); // Лемниската Бернулли
}

double hyperbola(double x) {
    return (x == 0) ? -1 : (1 / x); // Квадратичная гипербола
}

int main() {
    const double PI = 3.141592653589793;
    for (int i = 0; i <= 41; i++) {
        double x = -PI + (i * (2 * PI / 41));
        double f1 = verziere(x);
        double f2 = lemniskate(x);
        double f3 = hyperbola(x);
        
        printf("%.7f | %.7f | %.7f | %.7f\n", x, f1, f2, f3);
    }
    return 0;
}
