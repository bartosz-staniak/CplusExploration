#include <iostream>

using namespace std;

int main ()
{

bool myNewBoolean;
int a;
int userSelectedValue;

cout << "Insert an integer." << endl;
cin >> userSelectedValue;
if (cin.fail() || userSelectedValue < 1)
{
	cout << "Incorrect type of data";
}

myNewBoolean = (userSelectedValue < 5);
cout << myNewBoolean;

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
