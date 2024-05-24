#include <iostream>

using namespace std;

int main ()
{

bool myNewBoolean;
int myNewInteger;
int userSelectedValue;

cout << "Insert a natural number smaller than 5." << endl;
cin >> userSelectedValue;

if (cin.fail() || userSelectedValue < 1)
{
	cout << "Incorrect type of data" << endl;
}
else
{
	cout << "You entered: " << userSelectedValue << endl;
}

myNewBoolean =! (userSelectedValue < 5);
if (myNewBoolean == 0)
{
	cout << "Negative value assigned equals: " << myNewBoolean << endl << endl;
}
else if (myNewBoolean == 1)
{
	
}

myNewInteger =! (userSelectedValue < 5);
cout << myNewInteger << endl << endl;

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
