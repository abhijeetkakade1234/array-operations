#include<iostream>
#include "ReverseElement.cpp"
#include "Ascending.cpp"
#include "Desending.cpp"
#include "Matlib.cpp"

using namespace std;
int main() 
{
    int choice0, a = 0;
    char z[1];
    do
    {
		cout<<"Enter choice: "<<endl;
		cout<<" 1.Enter 1 for 2d array \n 2.Enter 2 for 1d matrix \n"<<endl;
		cin>>choice0;
		switch(choice0) 
		{
			case 1:
				{
					int choice1;
					cout<<"Enter choice: "<<endl;
					cout <<" 1.Enter 1 to ADD 2 MATRIX \n 2.Enter 2 to ADD 3 MATRIX \n 3.Enter 3 TRANSPOSE MATRIX ";
					cin>>choice1;
					switch(choice1) 
					{
						case 1:
							{
								int a,b;  
					            cout << "****ADDITION OF 2 MATRIX****" << endl;
					            cout <<"Enter ROW: ";
					            cin >> a;
					            cout<<endl;
					            cout <<"Enter COLOUMN: ";
					            cin >> b;
					            // Function call
					            add2mat(a,b);
								break;
							}
						case 2:
							{
								int a,b;  
					            cout << "****ADDITION OF 3 MATRIX****" << endl;
					            cout <<"Enter ROW: ";
					            cin >> a;
					            cout<<endl;
					            cout <<"Enter COLOUMN: ";
					            cin >> b;
					            // Function call
					            add3mat(a,b);
								break;
							}
						case 3:
							{
								int a,b;  
					            cout << "****TRANSPOSE OF MATRIX****" << endl;
					            cout <<"Enter ROW: ";
					            cin >> a;
					            cout<<endl;
					            cout <<"Enter COLOUMN: ";
					            cin >> b;
					            // Function call
					            transpose(a,b);
								break;		
							}		
						default:
							{
								cout << "ERROR 303  WRONG INPUT"<<endl;
					            break;
							}
					}
					break;
				}
			case 2:
				{
				    int choice2;
				    cout << "Enter choice: " << endl;
				    cout << " 1.Enter 1 to SORT Element in ascending order\n 2.Enter 1 to SORT Element in desending order \n 3.Enter 3 REVERSE Elements in ARRAY \n 4.Enter 4 to FIND MAX ELEMENT in ARRAY \n";
				    cin >> choice2;
				    switch (choice2) 
					{
				    	case 1: 
								{
					                int b;  
					                cout << "****ASCENDING ORDER****" << endl;
					                cout << "Enter SIZE: ";
					                cin >> b;
					                Ascending(b);
					                break;
				            	}
				            case 2:
				            	{	
									int b;  
					                cout << "****DESENDING ORDER****" << endl;
					                cout << "Enter SIZE: ";
					                cin >> b;
					                Desending(b);
				            		break;
								}
				            case 3: 
								{
					                int b;  
					                cout << "****REVERSE ORDER****" << endl;
					                cout << "Enter SIZE: ";
					                cin >> b;
					                reverse(b);
					                break;
				            	}
				            case 4:
				            	{
									int b;  
					                cout << "****MAX ELEMENT****" << endl;
					                cout << "Enter SIZE: ";
					                cin >> b;
					                Max_element(b);
					                break;
								}
				            default: 
								{
					                cout << "ERROR 303  WRONG INPUT"<<endl;
					                break;
					            }
					}
					break;
				}
			// if case 3	
			default:
				{
					cout<<"WRONG INPUT -->>Enter 1 or 2"<<endl;
					break;
				}	
		}
		cout<<endl;
		do
		{
			a = 3;
			cout<<"Do you want to continue: (y/N)"<<endl;
			cin>>z;
			if(z == "y" || z == "Y")
			{
				a = 0;
			}
			else if (z == "n" || z == "N")
			{
				a = 1;
			}
			else 
			{
				a = 2;
				cout<<"**  If you want to continue press 'Y' OR 'y' else press 'n' OR 'N'  **"<<endl;
			}
		}while(a == 2);
	}while(a == 0);
	cout<<"safe to quit...."<<endl;
    return 0;
}
