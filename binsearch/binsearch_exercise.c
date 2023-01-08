#include <stdio.h>
#include <time.h>

int binsearch_exercise(int target, int array[], int size)
{
    int low, high, mid;

    low = 0;
    high = size - 1;

    mid = (low + high) / 2;
    while (low <= high && target != array[mid])
    {
        if (target < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }

    if (target == array[mid])
    {
        return mid; /* found a result */
    }

    return -1;
}

int binsearch_orig(int x, int v[], int n)
{
    int low, mid, high;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid - 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

/* Fills array with values from 0 to size - 1. Array must be large enough.*/
void fill_array(int *array, int size)
{
    --size;
    while (size >= 0)
    {
        array[size] = size;
        size--;
    }
}

int main(void)
{
    int target, size, result;
    printf("Enter an array size: ");
    scanf("%d", &size);

    printf("Enter a target value: ");
    scanf("%d", &target);

    int test_arr[size];
    fill_array(test_arr, size);

    /* set up profiling */
    clock_t start, end;
    double execution_time;
    start = clock();

    /* run search */
    result = binsearch_exercise(target, test_arr, size);

    /* get profiling results */
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("The original code ran in %f seconds\n", execution_time);

    start = clock();

    /* run search */
    result = binsearch_exercise(target, test_arr, size);

    /* get profiling results */
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("The new code ran in %f seconds\n", execution_time);

    return 0;
}
