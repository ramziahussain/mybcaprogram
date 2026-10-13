#include <stdio.h>

int main()
{
    int rollno;
    float m1, m2, m3, m4, m5;
    float total, average, percentage;

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter marks in five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = total / 5;

    printf("\nRoll Number = %d", rollno);
    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage = %.2f", average);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
