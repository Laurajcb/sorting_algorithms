#include <stdio.h>
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
* lomuto_partition - Function that makes a partition on the array
* according pivot
* @array: array of integers.
* @size: array size.
* @low: the partition lowest node.
* @higth: the partition higthest node
* Return: index
*/
int lomuto_partition(int *array, int low, int higth, size_t size)
{
	int pivot = array[higth];
	int i = low - 1;
	int j;

	for (j = low; j <= higth; j++)
	{
		if (pivot >= array[j])
		{
			i++;
			if (i != j)
			{
				swap(array, j, i);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
* _quick_sort - Function that use recursion
* according to partition
* @array: array of integers.
* @size: array size.
* @low: the partition lowest node.
* @higth: the partition higthest node
*/
void _quick_sort(int *array, int low, int higth, size_t size)
{
	int partition_index;

	if (low < higth)
	{
		partition_index = lomuto_partition(array, low, higth, size);
		_quick_sort(array, low, partition_index - 1, size);
		_quick_sort(array, partition_index + 1, higth, size);
	}
}

/**
* quick_sort- Function that sorts an array of integers using
* lumoto partition algorithm.
* @array: array of integers.
* @size: array size.
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	_quick_sort(array, 0, size - 1, size);
}
