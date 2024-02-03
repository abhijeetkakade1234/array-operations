#include<iostream>
using namespace std;

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
	cout<<"REVERSE ARRAY IS: ";
	for(int i = 4; i >= 0; i--)
	{
		cout<<arr[i];
	}
}
