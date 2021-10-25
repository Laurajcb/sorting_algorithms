#include <stdio.h>
#include "sort.h"

/**
* selection_sort - Function that sorts an array of integers using
* selection sort algorithm.
* @array: array of integers.
* @size: array size.
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int min = 0, index = 0;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		if (min != array[i])
		{
			array[index] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
