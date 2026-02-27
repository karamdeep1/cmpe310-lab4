#include <stdio.h>
#include <stdlib.h>

extern int sum_array(const int *arr, long n);

int main(int argc, char **argv) {
    FILE *fp = fopen(argv[1], "r");

    long n;
    fscanf(fp, "%ld", &n);

    int *arr = (int *)malloc((size_t)n * sizeof(int));

    for (long i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    fclose(fp);

    int sum = sum_array(arr, n);
    printf("Sum = %d\n", sum);

    free(arr);
    return 0;
}