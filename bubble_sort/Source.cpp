#include <stdio.h>
/**
* @brief �o�u���\�[�g���g���ď����ɂ���
* @param array[]�@�z��
* @param array_size�@�z��T�C�Y
* @return int
*/
void BubbleSort(int array[], int array_size)
{
	/**
	* temp�@����ւ��邽�߂̕ϐ�
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
	* Array[5]�@�z��
	*/
	int Array[5] = { 1,5,7,2,0 };
	/**
	* Arrray_size�@�z��T�C�Y
	*/
	int Array_size = 5;
	BubbleSort(Array, Array_size);
	return 0;
}