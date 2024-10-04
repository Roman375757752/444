#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

double verziere(double x) {
    return sqrt(1 - (x * x)); // y = √(1 - x²)
}

double lemniskate(double x) {
    return (x * x > 1) ? -1 : sqrt(1 - (x * x * x * x)); // Лемниската Бернулли
}

double hyperbola(double x) {
    return (x == 0) ? -1 : (1 / x); // Квадратичная гипербола
}

void print_graph(double (*func)(double), const char *name) {
    for (int i = 0; i <= 42; i++) {
        double x = -M_PI + (i * (2 * M_PI / 42));
        double y = func(x);
        if (y >= 0) {
            int pos = (int)(y * 21); // Масштабирование
            for (int j = 0; j < pos; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    print_graph(verziere, "Верзьера Аньези");
    print_graph(lemniskate, "Лемниската Бернулли");
    print_graph(hyperbola, "Квадратичная гипербола");
    return 0;
}
