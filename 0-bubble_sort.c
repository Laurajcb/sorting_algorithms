#include "sort.h"
/**
* bubble_sort - Function that sorts an array of integers using
* bubble sort algorithm.
* @array: array of integers.
* @size: array size.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int again = 1;
	int tmp = 0;
	int swap = 0;

	while (again > 0)
	{
		for (i = 0, swap = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap += 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
		{
			again = 0;
		}
	}
}
