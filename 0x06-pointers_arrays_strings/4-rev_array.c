#include "main.h"

/**
  * reverse_array - a function that reverses the content of
  * an array of integers
  * @a: a pointer to the array of integers
  * @n: the number of elements of the array
  * Return: void (array will be reversed)
  */
void reverse_array(int *a, int n)
{
	int *start, *end, i;

	start = end = a;
	for (i = 0; i < (n - 1); i++)
		end++;
	while (start < end)
	{
		*start = *start + *end;
		*end = *start - *end;
		*start = *start - *end;
		start++;
		end--;
	}
}
