//Find common elements in three sorted arrays. Given three arrays sorted in increasing order
//. Find the elements that are common in all three arrays.
#include <stdio.h>



int main() {

    int n1, n2, n3;



    printf("Enter the size of the first array: ");

    scanf("%d", &n1);



    int A[n1];



    printf("Enter the elements of the first array: ");

    for (int i = 0; i < n1; i++) {

        scanf("%d", &A[i]);

    }



    printf("Enter the size of the second array: ");

    scanf("%d", &n2);



    int B[n2];



    printf("Enter the elements of the second array: ");

    for (int i = 0; i < n2; i++) {

        scanf("%d", &B[i]);

    }



    printf("Enter the size of the third array: ");

    scanf("%d", &n3);



    int C[n3];



    printf("Enter the elements of the third array: ");

    for (int i = 0; i < n3; i++) {

        scanf("%d", &C[i]);

    }



    printf("Common elements in all three arrays: ");



    for (int i = 0; i < n1; i++) {

        for (int j = 0; j < n2; j++) {

            for (int k = 0; k < n3; k++) {

                if (A[i] == B[j] && B[j] == C[k]) {

                    printf("%d ", A[i]);

                }

            }

        }

    }



    printf("\n");



    return 0;

}
