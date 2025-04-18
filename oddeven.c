#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num % 2 == 0)
        printf("%d is an EVEN number.\n", num);
    else
        printf("%d is an ODD number.\n", num);

    return 0;
}
