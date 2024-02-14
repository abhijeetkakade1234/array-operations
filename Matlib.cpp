#include <iostream>
using namespace std;

/*
All 2d / matrix functions :
		1. Add 2 mat
		2. Add 3 mat
		3. Transpose
*/
// 1.ADD of 2 mat **************************************************************
void add2mat(int m, int n)
{
	int mat1[m][n], mat2[m][n], mat3[m][n];
	// Input 1st matrix
	cout<<"Enter Elements òf 1st MATRIX: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat1[i][j];
		}
	}
	// Input 2nd matrix
	cout<<"Enter Elements òf 2nd MATRIX: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat2[i][j];
		}
	}
	// logic mat3 = mat2 + mat1;
	cout<<"wait for a second........."<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat3[i][j] = mat2[i][j] + mat1[i][j];
		}
	}
	// Output
	cout<<"Addition of 2 matrix is: "<<endl;
	for (int i = 0; i < m; i++)
	{
		cout<<endl;
		for (int j = 0; j < n; j++)
		{
			cout<<mat3[i][j]<<"\t";
		}
	}	
}
// 2.ADD of 3 mat **************************************************************
void add3mat(int m, int n)
{
	int mat1[m][n], mat2[m][n], mat3[m][n], mat4[m][n];
	// Input 1st matrix
	cout<<"Enter Elements òf 1st MATRIX: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat1[i][j];
		}
	}
	// Input 2nd matrix
	cout<<"Enter Elements òf 2nd MATRIX: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat2[i][j];
		}
	}
	// Input 3rd matrix
	cout<<"Enter Elements òf 3rd MATRIX: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat3[i][j];
		}
	}
	// logic mat4 = mat3+mat2 + mat1;
	cout<<"wait for a second........."<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat4[i][j] = mat3[i][j] + mat2[i][j] + mat1[i][j];
		}
	}
	// Output
	cout<<"Addition of 3 matrix is: "<<endl;
	for (int i = 0; i < m; i++)
	{
		cout<<endl;
		for (int j = 0; j < n; j++)
		{
			cout<<mat4[i][j]<<"\t";
		}
	}		
}
// 3.Transpose **************************************************************
/*
	11  12  13   11  21  31
	21  22  23 = 12  22  32 
	31  32  33   13  23  33
*/
void transpose(int m, int n)
{
	/*cout<<"Enter Size: ";
	cin>>m,n; ---> This should be in demo.cpp*/
	int mat[m][n];
	cout<<"Enter elements: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat[i][j];
		}
	}
	// o/p mat (Original matrix)
	cout<<"Matrix is: "<<endl;
	for (int i = 0; i < m; i++)
	{
		cout<<endl;
		for (int j = 0; j < n; j++)
		{
			cout<<mat[i][j]<<"\t";
		}
	}
	// Transpose mat 
	cout<<endl;
	cout<<"Transpose Matrix is: "<<endl;
	for (int i = 0; i < m; i++)
	{
		cout<<endl;
		for (int j = 0; j < n; j++)
		{
			cout<<mat[j][i]<<"\t";
		}
	}
}
// **************************************************************
// void if next function ()
