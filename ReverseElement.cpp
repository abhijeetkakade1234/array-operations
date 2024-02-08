#include<iostream>
using namespace std;

// REVERSE ELEMENT
 
void reverse(int size)
{
	int arr[size];
	cout<<"Enter Element: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	cout<<"ARRAY IS: ";
	for(int i = 0; i < size; i++)
	{
		cout<<("\t",arr[i]);
	}
	cout<<("\n");
	
	// REVERSE LOGIC
	 
	cout<<"REVERSE ARRAY IS: ";
	for(int i = 4; i >= 0; i--)
	{
		cout<<arr[i];
	}
}

// FIND MAX ELEMENT IN ARRAY 

void Max_element(int size)
{
	int arr[size], max_element = 0;
	cout<<"Enter Element: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	cout<<"ARRAY IS: ";
	for(int i = 0; i < size; i++)
	{
		cout<<("\t",arr[i]);
	}
	cout<<("\n");
	// MAX ELEMENT IN ARRAY LOGIC
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	cout<<"MAX ELEMENT IN FOLLOWING ARRAY IS: "<<max_element<<endl;
}
