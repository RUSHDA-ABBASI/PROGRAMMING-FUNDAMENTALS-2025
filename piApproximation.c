#include <stdio.h>

int main() {
    int i;
    float pi = 0.0;
    int terms = 0;

    for (i = 0; ; i++) {
       float term = (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
        pi += term;
        terms++;

        if (4 * pi >= 3.141 && 4 * pi <= 3.142) {
            printf("Pi approximation %f reached in %d terms.\n", 4 * pi, terms);
            break;
        }
    }
    return 0;
}
