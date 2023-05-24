#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;
    int aux;

    if ((array == NULL) || (size == 0))
        return;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size -1; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j + 1];
                array[j + 1] = array[j];
                array[j] = aux;

                print_array(array, size);

            }
        }
    }
    return;
}
