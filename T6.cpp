
#include <stdio.h>

union MyUnion {
    int x;
    double y;
    char z;
};

int main() {
    union MyUnion myUnion;
    
    printf("Size of union MyUnion: %lu bytes\n", sizeof(myUnion));
    printf("Size of int (x): %lu bytes\n", sizeof(myUnion.x));
    printf("Size of double (y): %lu bytes\n", sizeof(myUnion.y));
    printf("Size of char (z): %lu bytes\n", sizeof(myUnion.z));

    return 0;
}

