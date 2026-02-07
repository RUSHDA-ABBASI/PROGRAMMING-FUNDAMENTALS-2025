#include <stdio.h>
int main() {
    int students = 5, subjects = 4, terms = 3;
    float marks[5][4][3];   
    float termAvg[5][3];    
    float overallAvg[5];    
    int i, j, k;

   
    for (i = 0; i < students; i++) {
        printf("\n Enter marks for Student %d \n", i + 1);
        for (j = 0; j < subjects; j++) {
            for (k = 0; k < terms; k++) {
                printf("Enter marks for Subject %d, Term %d: ", j + 1, k + 1);
                scanf("%f", &marks[i][j][k]);
            }
        }
    }

    // Calculate averages
    for (i = 0; i < students; i++) {
        float totalOverall = 0;
        for (k = 0; k < terms; k++) {
            float termTotal = 0;
            for (j = 0; j < subjects; j++) {
                termTotal += marks[i][j][k];
            }
            termAvg[i][k] = termTotal / subjects;
            totalOverall += termAvg[i][k];
        }
        overallAvg[i] = totalOverall / terms;
    }

    
    printf("\n Student Averages\n");
    for (i = 0; i < students; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (k = 0; k < terms; k++) {
            printf("  Term %d Average: %f\n", k + 1, termAvg[i][k]);
        }
        printf("  Overall Average: %f\n", overallAvg[i]);
    }

    // Find highest overall scorer
    float maxAvg = overallAvg[0];
    int topStudent = 0;
    for (i = 1; i < students; i++) {
        if (overallAvg[i] > maxAvg) {
            maxAvg = overallAvg[i];
            topStudent = i;
        }
    }

    // Find term in which top student performed best
    float bestTermAvg = termAvg[topStudent][0];
    int bestTerm = 0;
    for (k = 1; k < terms; k++) {
        if (termAvg[topStudent][k] > bestTermAvg) {
            bestTermAvg = termAvg[topStudent][k];
            bestTerm = k;
        }
    }

    // Display top scorer info
    printf("\nHighest Overall Scorer\n");
    printf("Student %d scored the highest overall average of %f\n", topStudent + 1, maxAvg);
    printf("They performed best in Term %d with an average of %f\n", bestTerm + 1, bestTermAvg);

    return 0;
}
