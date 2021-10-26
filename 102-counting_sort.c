#include "sort.h"

/**
* counting_sort- that sorts an array of integers in
* ascending order using the Counting sort algorithm
* @size: array length.
* @array: array of integers.
*/
void counting_sort(int *array, size_t size)
{
	int i = 0, tmp = 0, tmp2 = 0, max = 0;
	int *aux_array, *new_array;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	aux_array = calloc((max + 1), sizeof(int));
	if (aux_array == NULL)
		return;
	for (i = size - 1; i >= 0; i--)
	{
		tmp = array[i];
		aux_array[tmp] = aux_array[tmp] + 1;
	}
	for (i = 1; i <= max; i++)
		aux_array[i] += aux_array[i - 1];

	print_array(aux_array, max + 1);

	new_array = calloc(size, sizeof(int));
	if (new_array == NULL)
		return;
	for (i = size - 1; i >= 0; i--)
	{
		tmp2 = array[i];
		new_array[aux_array[tmp2] - 1] = tmp2;
	}
	for (i = 0; i < size; i++)
		array[i] = new_array[i];

	free(aux_array);
	free(new_array);
}
