#include <stdio.h>

void BubbleSort(int array[], int n)
{
	int temp = 0;
	for (int i = 0; i <= n - 1; i++) 
	{
		for (int j = n - 1; j > i ; j--)
		{
			if (array[j] < array[ j - 1 ]) 
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
				printf("%d\n",array[i]);
	}
	
}

int main()
{
	int Array[5] = { 1,5,7,2,0 };
	int a = 5;
	BubbleSort(Array, a);
	return 0;
}