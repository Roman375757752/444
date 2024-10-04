#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        int temp = n;
        while (temp >= i) {
            temp -= i;
        }
        if (temp == 0) return 0; // Делится на i, значит не простое
    }
    return 1;
}

int largest_prime_factor(int a) {
    int largest = -1;
    for (int i = 2; i <= a; i++) {
        if (a < 2) return -1; // Если меньше 2, возвращаем n/a
        if (is_prime(i)) {
            int temp = a;
            while (temp >= i) {
                temp -= i;
            }
            if (temp == 0) largest = i; // Если делится, обновляем largest
        }
    }
    return largest;
}

int main() {
    int a;
    if (scanf("%d", &a) != 1) {
        printf("n/a\n");
        return 0;
    }
    int result = largest_prime_factor(a);
    if (result == -1) {
        printf("n/a\n");
    } else {
        printf("%d\n", result);
    }
    return 0;
}
