#include<iostream>
#include "ReverseElement.cpp"
#include "Ascending.cpp"
#include "Desending.cpp"

using namespace std;
int main() 
{
    int choice;
    cout << "Enter choice: " << endl;
    cout << "1. Enter 1 to Align Element in ascending order\n2.Enter 1 to Align Element in desending order \n3.Enter 3 REVERSE ElementS in ARRAY \n";
    cin >> choice;
    switch (choice) 
	{
    	case 1: 
		{
	                int b;  
	                cout<<"****ASCENDING ORDER****"<<endl;
	                cout << "Enter SIZE: ";
	                cin >> b;
	                Ascending(b);
	                break;
            	}
            case 2:
            	{	
			int b;  
	                cout<<"****DESENDING ORDER****"<<endl;
	                cout<<"Enter SIZE: ";
	                cin >> b;
	                Desending(b);
            		break;
		}
            case 3: 
		{
	                int b;  
	                cout<<"****REVERSE ORDER****"<<endl;
	                cout << "Enter SIZE: ";
	                cin >> b;
	                reverse(b);
	                break;
            	}
            default: 
		{
	                cout << "ERROR 303  WRONG INPUT";
	                break;
		}
	}
    return 0;
}
