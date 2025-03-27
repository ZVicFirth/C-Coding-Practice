/*
Author: Zachary Firth
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define SUM 200.00

//Function prototypes
Q1(void);
Q2(void);

int main()
{
    Q1();
    Q2();
    return 0;
}

Q1(void)
{
    int i, j = 0; //index
    int value[SIZE] = {8, 12, 18, 25, 24, 30, 28, 22, 23, 10};
    double percentage[SIZE][1]; // % of each value

    printf("Index      Value     %% of total\n");
        for (i = 0; i < SIZE; i++) //Loop to put index (i), values, and percentage of values
        {
        percentage[i][0] = (value[i] / SUM) * 100.00;
        printf("%2d%13d%13.2f\n", i, value[i], percentage[i][0]);
        }
        printf("\n");
}

Q2(void)
{
    int a[4][3] = {{10, 10, 10}, {2, 0, 1}, {8, 6, 9}, {8, 4, 10}};
    double st_ave[4][1]; //Student average
    double quiz_ave[1][3]; //Quiz average
    int i, j, k, t = 0;
    int studentNumber;
    printf(" Q1 Q2 Q3\n"); // Labels for grades from quizzes 1, 2, and 3
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++ ){
          printf("%3d", a[i][j]);
          studentNumber = i + 1;
        }
        printf("-Student %d\n", studentNumber);
    }
    printf("\nStudent Averages\n");
    for (k = 0; k < 4; k++){
        st_ave[k][0] = (a[k][0] + a[k][1] + a[k][2]) / 3.0;
        printf("%.1f", st_ave[k][0]);
        studentNumber = k + 1;
        printf("------Student %d\n", studentNumber);
    }
    printf("\nQuiz Averages\n");
    printf("Q1  Q2   Q3\n");
    for (t = 0; t < 3; t++){
        quiz_ave[0][t] = (a[0][t] + a[1][t] + a[2][t] + a[3][t]) / 4.0;
        printf("%.1f ", quiz_ave[0][t]);
    }



}
