#include <stdio.h>
#include <stdlib.h>

int usage(void) {
    printf("\nUsage\n");
    printf("=========================\n");
    printf("evenodd <integer>\n");
    printf("=========================\n");
    return 0;
}

int main(int argc, char *argv[]) {  
    if (argc <= 1) {
        printf("ERROR: No argument found...\n");
        usage();
        exit(1);
    }

    int num = atoi(argv[1]);

    if (num % 2 == 0)
        printf("%d is an EVEN number.\n", num);
    else
        printf("%d is an ODD number.\n", num);

    return 0;
}
