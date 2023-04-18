#include <iostream>

using namespace std;
typedef int* intArrPtr;

void set_zero(int arr[], int i);

void display(int arr[], int i);

void which_lab(int i, int &size);

void login(int arr[], int i);

void logoff(int arr[], int i);

bool search(int arr[], int i, int look);


int main()
{
	intArrPtr *lab = new intArrPtr[4];
	int choice, lb, look;
	bool found = false;
	
	lab[0] = new int[5];
	lab[1] = new int[6];
	lab[2] = new int[4];
	lab[3] = new int[3];
	
	for(int i = 0; i < 4; i++)
	{
		set_zero(lab[i], i);	
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Lab " << i + 1 << " ///";
		display(lab[i], i);	
	}
	
	do
	{
		cout << "===================================" << endl;
		cout << "1. Display status" << endl;
		cout << "2. Login with a user" << endl;
		cout << "3. Logoff a user" << endl;
		cout << "4. Search for a user" << endl;
		cout << "9. Exit" << endl;
		cout << "===================================" << endl;
		
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				for(int i = 0; i < 4; i++)
				{
					cout << "Lab " << i + 1 << " ///";
					display(lab[i], i);	
				}
				break;
			
			case 2:
				cout << "===================================" << endl;
				cout << "Which lab do u wish to log on in: ";
				do
				{
					cin >> lb;
					
				}while(lb > 4 || lb < 1);
				lb--;
				login(lab[lb], lb);
				break;
				
			case 3:
				cout << "===================================" << endl;
				cout << "From which lab do u wish to logoff a user: ";
				{
					cin >> lb;
					
				}while(lb > 4 || lb < 1);
				lb--;
				logoff(lab[lb], lb);
				break;
				
			case 4:
				cout << "===================================" << endl;
				cout << "Which user do u wish to find: ";
				cin >> look;
				found = false;
				for(int i = 0; i < 4; i++)
				{
					if(search(lab[i], i, look))
					{
						found = true;
					}
				}
				if(found == false)
				{
					cout << "User " << look << " not found" << endl;
				}
				break;
		}
	}while(choice != 9);
	
	return 0;
}

void set_zero(int arr[], int i)
{
	int size;
	which_lab(i, size);

	
	for(int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

void display(int arr[], int i)
{
	int size;
	which_lab(i, size);
	
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == 0)
		{
			cout << i + 1 << ":  empty  ";
		}
		else
		{
			cout << i + 1 << ":  " << arr[i] << "  ";
		}
	}
	
	cout << endl;
}

void which_lab(int i, int &size)
{
	if(i == 0)
		size = 5;
	if(i == 1)
		size = 6;
	if(i == 2)
		size = 4;
	if(i == 3)
		size = 3;
}

void login(int arr[], int i)
{
	int user, size, station;
	
	which_lab(i, size);
	
	display(arr,i);
	
	cout << "Which display do u want to login into: ";
	do
	{
		cin >> station;
		
	}while((station > 0 || station < size) && arr[station] != 0);
	station--;
	
	cout << "Enter your user ID: ";
	cin >> user;
	
	arr[station] = user;
	
	cout << "U have login user " << user << " succesfully" << endl;
	cout << "===================================" << endl;
}

void logoff(int arr[], int i)
{
	int user, size;
	bool deleted = false;
	
	which_lab(i, size);
	
	display(arr,i);
	
	cout << "Which user do u wish to logoff from a station: ";

	cin >> user;
	
	for(int x = 0; x < size; x++)
	{
		if(arr[x] == user)
		{
			arr[x] = 0;
			deleted = true;
		}
	}
	
	if(deleted == true)
	{
		cout << "User " << user << " deleted succesfully" << endl;
	}
	else
	{
		cout << "User " << user << " is not logged on this lab" << endl;
	}
	cout << "===================================" << endl;
}

bool search(int arr[], int i, int look)
{	
	int size;
	which_lab(i, size);

	
	for(int x = 0; x < size; x++)
	{
		if(arr[x] == look)
		{
			cout << "User " << look << " found!" << endl;
			cout << "Current lab: " << i + 1 << endl;
			cout << "Current station: " << x + 1 << endl;
		}
	}
	
	return true;
}
