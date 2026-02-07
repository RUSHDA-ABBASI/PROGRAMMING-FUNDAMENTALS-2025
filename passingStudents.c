#include <stdio.h>
int main() {
    int marks;
    int pass = 0, fail = 0;
    int consecutiveFails = 0;

    printf("Enter marks:\n");

    while (1) {
        scanf("%d", &marks);

        if (marks == -1) {
            break; 
        }

        if (marks >= 50) {
            pass++;
            consecutiveFails = 0;
        } 
        else {
            fail++;
            consecutiveFails++;
        }

       
        if (consecutiveFails >= 3) {
            printf("Too many consecutive fails.\n");
            break;
        }
    }

    printf("\nTotal Passing Students: %d", pass);
    printf("\nTotal Failing Students: %d\n", fail);

    return 0;
}
