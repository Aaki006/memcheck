#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *ptr = malloc(64);

    if (ptr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    strcpy(ptr, "Hello, memcheck!");
    printf("%s\n", ptr);

    /* Intentionally not freeing ptr.
       This tests memory leak detection. */

    return 0;
}

