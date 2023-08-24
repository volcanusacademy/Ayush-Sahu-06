#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float average;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);

    if (subject1 > 75 && subject2 > 75 && subject3 > 75) {
        average = (subject1 + subject2 + subject3) / 3.0;

        if (average > 80) {
            printf("Student has passed!\n");
        } else {
            printf("Student has failed due to average less than 80.\n");
        }
    } else {
        printf("Student has failed due to marks less than 75.\n");
    }

    return 0;
}
