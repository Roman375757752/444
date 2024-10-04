#include <stdio.h>

int fibonacci(int n) {
    if (n < 0) return -1; // Ошибка для отрицательных значений
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a\n");
        return 0;
    }
    int result = fibonacci(n);
    if (result < 0) {
        printf("n/a\n");
    } else {
        printf("%d\n", result);
    }
    return 0;
}
