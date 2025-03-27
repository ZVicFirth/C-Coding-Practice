/*
Author: Zachary Firth
*/

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg);

void final_grade (int points, char *gradePtr, char *missedPtr);

int main()
{
    //Question 1
    double one, two, three, sum_of_3, avg_of_3;
    printf("Enter 3 numbers here: ");
    scanf("%lf%lf%lf", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);  //Function call in
    printf("The sum of the 3 numbers is %.2f\n", sum_of_3);
    printf("The average of the 3 numbers is %.2f\n", avg_of_3);

    //Question 2
    int pts, missed;
    char grade;
    printf("Enter the points earned from the assignment/quiz: ");
    scanf("%d", &pts);
    final_grade(pts, &grade, &missed); //Function call in
    printf("The grade on the assignment/quiz is a(n) %c.\n", grade);
    if (missed == '!')
    {
        if (pts == 59){
        grade = grade - 2;
        printf("%c%c%c\n", missed, missed, missed);
        printf("So close to a(n) %c.", grade);
        }
        else
        {
        grade = grade - 1;
        printf("%c%c%c\n", missed, missed, missed);
        printf("So close to a(n) %c.", grade);
        }
    }
    return 0;
}

//Function definitions

void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg)
{
 *sum = n1 + n2 + n3;  //Sum of the three numbers
 *avg = *sum / 3;  // Average of the three numbers
}

void final_grade (int points, char *gradePtr, char *missedPtr)
{
    //If-else statements to account for each grade
    if (points >= 90 && points <= 100 )
    {
        *gradePtr = 'A';
    }
    else if (points >= 80 && points < 90)
    {
        *gradePtr = 'B';
    }
    else if (points >= 70 && points < 80)
    {
        *gradePtr = 'C';
    }
    else if (points >= 60 && points < 70)
    {
        *gradePtr = 'D';
    }
    else if (points < 60)
    {
        *gradePtr = 'F';
    }
    if (points == 89 || points == 79 || points == 69 || points == 59)
    {
        *missedPtr = '!';   // The indication that the grade was so close to the next grade above
    }
}

