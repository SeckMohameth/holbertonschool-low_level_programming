#include "sort.h"

/**
 * swap - swap two integers
 * @num1: first integer
 * @num2: second integer
 * Return: Nothing
 **/

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * selection_sort - selection sort algorithm
 * @array: pointer to array
 * @size: size of array
 * Return: Returns nothing
 **/

void selection_sort(int *array, size_t size)
{
	size_t item1, item2, currentMin;

	for (item1 = 0; item1 < size - 1; item1++)
	{
		currentMin = item1;
		for (item2 = item1 + 1; item2 < size; item2++)
		{
			if (array[item2] < array[currentMin])
			{
				currentMin = item2;
			}
		}
		if (currentMin != item1)
		{
			swap(&array[currentMin], &array[item1]);
			print_array(array, size);
		}

	}
}
