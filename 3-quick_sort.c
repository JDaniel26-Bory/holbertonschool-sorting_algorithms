#include "sort.h"

void quick_sort(int *array, size_t size)
{
    if (size < 0)
        return;
    real_size = size;
    quick_helper(array, 0, size - 1);
}

void quick_helper(int *array, int, left, int rigth)
{
    int part;

    if (left > rigth)
        return;
    part = part
}