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
 * bubble_sort - bubble sort algorithm
 * @array: pointer to array of elements
 * @size: size of array
 * Return: Nothing
 **/

void bubble_sort(int *array, size_t size)
{
	size_t count, i;

	if (!array)
	{
		return;
	}

	for (count = 0; count < size - 1; ++count)
	{
		for (i = 0; i < size - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
	}
}
