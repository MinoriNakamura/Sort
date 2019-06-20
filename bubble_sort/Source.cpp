#include <stdio.h>
/**
* @brief バブルソートを使って昇順にする
* @param array[]　配列
* @param array_size　配列サイズ
* @return int
*/
void BubbleSort(int array[], int array_size)
{
	/**
	* temp　入れ替えるための変数
	*/
	int temp = 0;
	for (int i = 0; i <= array_size - 1; i++) 
	{
		for (int j = array_size - 1; j > i ; j--)
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
	/**
	* Array[5]　配列
	*/
	int Array[5] = { 1,5,7,2,0 };
	/**
	* Arrray_size　配列サイズ
	*/
	int Array_size = 5;
	BubbleSort(Array, Array_size);
	return 0;
}