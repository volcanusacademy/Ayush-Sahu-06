//Write a program to print numbers from 1 to 100 skipping all the multiples of 3 by using "continue" statement
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d\t", i);
    }
    return 0;
}







