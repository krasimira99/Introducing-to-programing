#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number,k=5, m,counter=0,count5=0,recharge=0,l=10 ;
	recharge = k + l;
	do
	{
		cout << ">> MENU <<" << endl;
		cout << "1. Balance on your account\n";
		cout << "2. Recharge your vaucher\n";
		cout << "3. Exit\n";
		cout << endl;
		cout << "Enter your choise:";
		cin >> number;
		if (number == 1) cout << "Your balance is " << k << "leva" << endl;
		cout << endl;
		if (number == 2)
		{
			cout << "Enter the number of the vaucher:"<< endl;
			do
			{
				cin >> m; counter++;
				{
				   if (m == 5) count5++;
				   if (count5 == 3) cout << "Invalid vaucher!" << endl;
				}
			} while (counter<5);
			if (count5 != 3)cout << "Your balance is now "<<recharge<<" leva" << endl;
		}
		cout << endl;
		if (number == 3) 
		{
			break;
		}
	} while (true);
	return 0;
}