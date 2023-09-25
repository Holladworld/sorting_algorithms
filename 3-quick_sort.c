#include "sort.h"

/**
 * swap_array - Swaps two integers in an array and prints the array.
 * @array: The array to modify - integers.
 * @size: The size of the array.
 * @a: first index to swap.
 * @b: second index to swap.
 */
void swap_array(int *array, size_t size, int *a, int *b)
{
	int temp_var;


	if (*a != *b)
	{
		temp_var = *a;
		*a = *b;
		*b = temp_var;
		print_array(array, size);
	}
}

/**
 * quick_sort_lomuto_ - Lomuto partition scheme for quicksort.
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The left index of the partition.
 * @right: The right index of the partition.
 * Return: The pivot index.
 */
int quick_sort_lomuto_(int *array, size_t size,\
	       	ssize_t left, ssize_t right)
{
	ssize_t low = left - 1, fast;
	int pivot_val = array[right];

	for (fast = left; fast <= right - 1; fast++)
	{
		if (array[fast] <= pivot_val)
		{
			low += 1;
			swap_array(array, size, &array[low], &array[fast]);
	}
}

	swap_array(array, size, &array[low + 1], &array[right]);
	return (low + 1);
}

/**
 * quick_sort_recursion - Recursive function for quicksort.
 * @array: The array of integers.
 * @size: The size of the array.
 * @left_idx: The left index of the partition.
 * @right_idx: The right index of the partition.
 */
void quick_sort_recursion(int *array, size_t size, ssize_t left_idx, ssize_t right_idx)
{
	size_t partition;

	if (left_idx < right_idx)
	{
		partition = quick_sort_lomuto_(array, size, left_idx, right_idx);

		quick_sort_recursion(array, size, left_idx, partition - 1);
		quick_sort_recursion(array, size, partition + 1, right_idx);
	}
}

/**
 * quick_sort - Sorts an array of integers using Quick sort
 * and lomuto partition scheme
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_recursion(array, size, 0, size - 1);
}
