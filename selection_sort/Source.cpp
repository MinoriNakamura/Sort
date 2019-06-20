#include<stdio.h>

int SelectionSort(int Array[],int Array_size)
{
	int temp = 0;
	int min = 0;
	for (int i = 0; i <= Array_size-1 ; i++)
	{
		min=Array[i];
		for (int j = Array_size - 1; j >= i; j--)
		{
			if (Array[j] < min)
			{
				temp = Array[j];
				Array[j] = Array[i];
				Array[i] = temp;
			}
		}
		printf("%d\n", Array[i]);
	}
	return 0;
}

int main()
{
	int array[5] = { 3,6,1,8,7 };
	int array_size = 5;
	SelectionSort(array, array_size);
}