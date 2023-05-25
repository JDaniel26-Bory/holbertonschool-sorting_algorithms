#include "sort.h"

/**
 * selection_sort -  the principal function
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
size_t i, j, min_pos, temp;
if ((array == NULL) || (size == 0))
return;
for (i = 0; i < size - 1; i++)
{
min_pos = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[min_pos])
min_pos = j;
if (min_pos != i)
{
temp = array[i];
array[i] = array[min_pos];
array[min_pos] = temp;
print_array(array, size);
}
}
}
