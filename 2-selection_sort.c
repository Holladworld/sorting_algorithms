#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using Selection sort.
 * @array: The array of integers to be sorted.
 * @size: The number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{

	size_t i, j;
	int *min_ptr, tmp;
	/* Check for NULL array or size less than 2 */
	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_ptr = array + i;

		/* Find the minimum element in the unsorted portion */
		for (j = i + 1; j < size; j++)
			min_ptr = (array[j] < *min_ptr) ? (array + j) : min_ptr;

	/* Swap the minimum element with the current element if needed */
		if ((array + i) != min_ptr)
		{
			tmp = array[i];
			array[i] = *min_ptr;
			*min_ptr = tmp;
			/* Print the array after the swap */
			print_array(array, size);
		}
	}
}
