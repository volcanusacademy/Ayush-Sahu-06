#include <stdio.h>

int main() {
    int numSides;
    double sideLength[10], angle;

    // Accept the number of sides from the user
    printf("Enter the number of sides: ");
    scanf("%d", &numSides);

    if (numSides < 3) {
        printf("A polygon must have at least 3 sides.\n");
        return 0;
    }

    // Accept the length of each side from the user
    for (int i = 0; i < numSides; i++) {
        printf("Enter the length of side %d: ", i + 1);
        scanf("%lf", &sideLength[i]);
    }

    // Calculate the interior angle of the polygon
    angle = (numSides - 2) * 180.0 / numSides;

    // Check if all sides have the same length
    int sameLength = 1;
    for (int i = 1; i < numSides; i++) {
        if (sideLength[i] != sideLength[0]) {
            sameLength = 0;
            break;
        }
    }

    // Check if all angles are equal
    int equiangular = (angle == 180.0 / numSides);

    // Check if it's a regular polygon
    if (sameLength && equiangular) {
        printf("It is a regular polygon.\n");
    } else {
        printf("It is not a regular polygon.\n");
    }

    return 0;
}
