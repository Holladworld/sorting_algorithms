#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>
#include <sys/types.h>
#define UP 0
#define DOWN 1

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

/* Source file: Prints an array*/
void print_array(const int *array, size_t size);
/* Source file: print list*/
void print_list(const listint_t *list);
/* Source file: Shell sort Using knuth sequence */
void shell_sort(int *array, size_t size);


/* *Functions for Sorting array of integers in ascending order */
void bubble_sort(int *array, size_t size);/*BUBBLE SORTING*/
void selection_sort(int *array, size_t size);/*SELECTION SORTING*/
void insertion_sort_list(listint_t **list);/*INSERTION SORTING*/
void quick_sort(int *array, size_t size); /* QUICK SORTING */
void quick_sort_hoare(int *array, size_t size);/*QUICK SORTING*/

/*Function that sorts a doubly linked list of integers in ascending*/
void cocktail_sort_list(listint_t **list);/*COCKTAIL SHAKER SORT*/
void counting_sort(int *array, size_t size);/*COUNTING SORT*/
void merge_sort(int *array, size_t size); /*MERGE SORT*/

void heap_sort(int *array, size_t size); /*hEAP SORT*/
void radix_sort(int *array, size_t size); /*RADIX SORT */
void bitonic_sort(int *array, size_t size);/*BITONIC SORT*/

#endif
