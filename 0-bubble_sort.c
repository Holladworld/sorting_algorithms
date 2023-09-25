#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Flag to check if any swaps were made in this pass*/
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{ /* Swap elements*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print the array after the swap*/
				print_array(array, size);
				swapped = 1; /* Set the flag to indicate a swap occurred*/
			}
		}
		/* If no swaps occurred in this pass, the array is sorted*/
		if (!swapped)
			break;
	}
}
