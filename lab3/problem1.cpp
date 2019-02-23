#include "problem1.h"

void reverseArray(int arr[], int start, int end){
    //write your code here
 int main()
{

	int a[] = { 1,2,3 };
	reverseArray(a, 0, 1); 
	return 0;
}

void reverseArray(int arr[], int start, int end)
{
	int j = start;
	int size = (end - start) + 1;
	int temp[size]; 
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[j];
		j++;
	}
	for (int i = size - 1, k = start; i >= 0; i--, k++)
		arr[k] = temp[i];
	for (int i = 0; i < 3; i++)
		cout << arr[i] << " ";
}

}
