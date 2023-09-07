#include <stdio.h>



#include <string.h>







int main() {



    char input[50];







    printf("Enter a string: ");



    gets(input);







    printf("Generated numbers:\n");







    for (int i = 0; i < strlen(input); i++) {



        char c = input[i];



        printf("%c: %04d\n", c, c);



    }

    return 0;

}
