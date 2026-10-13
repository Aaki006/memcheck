#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(5 * sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    printf("First value: %d\n", ptr[0]);

    free(ptr);

    return 0;
}
