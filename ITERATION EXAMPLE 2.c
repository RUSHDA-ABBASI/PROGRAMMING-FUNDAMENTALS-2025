#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d is Even\n", i);
        } else {
            printf("%d is Odd\n", i);
        }
    }

    return 0;
}
