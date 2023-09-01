#include <stdio.h>

int main() {
    int score;

    printf("Welcome to the Grading System!\n");
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Your grade: A\n");
        printf("Excellent work!\n");
    } else if (score >= 80) {
        printf("Your grade: B\n");
        printf("Good job!\n");
    } else if (score >= 70) {
        printf("Your grade: C\n");
        printf("You did okay.\n");
    } else if (score >= 60) {
        printf("Your grade: D\n");
        printf("You need improvement.\n");
    } else {
        printf("Your grade: F\n");
        printf("You need to work harder.\n");
    }

    return 0;
}

