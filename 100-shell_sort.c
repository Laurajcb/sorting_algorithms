#include "sort.h"

/**
* swap- Function that swaps two nodes
* @array: array of integers.
* @index1: size reference.
* @index2: size reference
*/
void swap(int *array, int index1, int index2)
{
	int tmp = array[index1];

	array[index1] = array[index2];
	array[index2] = tmp;
}

/**
* shell_sort - Function that makes a partition on the array
* according pivot
* @array: array of integers.
* @size: array size.
* Return: None
*/
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, inner = 0, outer = 0;
	int value = 0;

	if (size < 2 || array == NULL)
		return;

	for (gap = 1; gap <= size / 3; gap = (gap * 3 + 1))
		continue;

	while (gap > 0)
	{
		for (outer = gap; outer < size; outer++)
		{
			value = array[outer];
			inner = outer;
			while (inner > gap - 1 && array[inner - gap] >= value)
			{
				array[inner] = array[inner - gap];
				inner = inner - gap;
			}
			array[inner] = value;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
