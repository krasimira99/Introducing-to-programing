#include "pch.h"
#include<iostream>
using namespace std;
int main()
{
	int n, m, digit, rev=0;
	cout << "Number: ";
	cin >> m; 
	if (m < 10 || m>30000) cout << "False" << endl; 
	return 0;
	n = m;
	do {
		digit = m % 10;
		rev = rev * 10 + digit;
		m = m / 10;
	} while (m != 0);
	if (n == rev)
		cout << "The number is a palindrome." << endl;
	else
		cout << "The number is not a palindrome." << endl;
	return 0;
}
