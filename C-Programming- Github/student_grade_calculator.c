#include <stdio.h>

int main() {
    char name[50];
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter student name: ");
    scanf("%49s", name);

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\nStudent Name: %s", name);
    printf("\nTotal Marks: %d/500", total);
    printf("\nPercentage: %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade: A");
    else if (percentage >= 75)
        printf("\nGrade: B");
    else if (percentage >= 60)
        printf("\nGrade: C");
    else if (percentage >= 40)
        printf("\nGrade: D");
    else
        printf("\nGrade: F");

    return 0;
}