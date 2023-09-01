#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

