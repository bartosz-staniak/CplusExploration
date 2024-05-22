#include <iostream>

using namespace std;

int main ()
{

bool myNewBoolean;
int myNewInteger;
int userSelectedValue;

cout << "Insert a natural number." << endl;
cin >> userSelectedValue;
if (cin.fail() || userSelectedValue < 1)
{
	cout << "Incorrect type of data";
}

myNewBoolean =! (userSelectedValue < 5);
cout << myNewBoolean << endl << endl;

myNewInteger =! (userSelectedValue < 5);

char quitApp;
 
cout << "Press 'y' and then press Enter key to end the program. \n";
cin >> quitApp;

if (quitApp == 'y')
	{
		return 0;	
	}
else
	{
		cout << "Testing \n";
	}

cout << "Press any letter key then Enter key to end the program. \n";
cin >> quitApp;
    
}
