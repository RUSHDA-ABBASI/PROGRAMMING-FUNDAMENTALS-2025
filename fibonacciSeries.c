#include <stdio.h>

int main() {
    int a = 0, b = 1, c;
    int sum = 0;

    printf("Fibonacci series up to 1000:\n");
    printf("%d %d ", a, b);

    c = a + b;
    while (c <= 1000) {
        printf("%d ", c);

        if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0) {
            sum += c;
        }

        a = b;
        b = c;
        c = a + b;
    }

    printf("Sum of Fibonacci numbers divisible by 3, 5, or 7 = %d\n", sum);
    return 0;
}
