#include<iostream>
using namespace std;

void Desending(int size)
{
	int arr[size];
	cout<<"Enter Elements: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	// Sorting
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			// Swapping
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	// Desending 
	cout<<"Desending order is: ";
	for (int i = size - 1; i >= 0; i--)
	{
		cout<<arr[i];
	}
}
