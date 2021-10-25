#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prints an array  */
void print_array(const int *array, size_t size);
/*Prints a list */
void print_list(const listint_t *list);
/* sorts an array of int in ascending order with Bubble sort algorithm */
void bubble_sort(int *array, size_t size);
/* sorts a dll of integers in ascending order with Insertion sort algorithm */
void insertion_sort_list(listint_t **list);
/* sorts an array of int in ascending order with Selection sort algorithm */
void selection_sort(int *array, size_t size);
/* sorts an array of int in ascending order with Quick sort algorithm */
void quick_sort(int *array, size_t size);

#endif
