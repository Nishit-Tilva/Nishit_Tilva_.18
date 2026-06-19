#include <stdio.h>

int main() {
    int num = 5;
    int i = 1; // Initialize the loop counter

    printf("Multiplication Table of %d:\n", num);
    printf("---------------------------\n");

    // While loop runs from 1 to 10
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++; // Increment the counter
    }

    return 0;
}
