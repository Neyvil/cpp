#include <bits/stdc++.h>
using namespace std;

void ReverseDigits(int n)
{
	int digit;
	int revNum = 0;
	while (n > 0)
	{
		digit = n % 10;
		revNum = revNum * 10 + digit;
		n = n / 10;
	}
	cout << revNum;
}

bool palindrome(int n)
{
	int originalNum = n;
	int digit;
	int revNum = 0;
	while (n > 0)
	{
		digit = n % 10;
		revNum = revNum * 10 + digit;
		n = n / 10;
	}
	if (originalNum == revNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool armstrong(int n)
{
	int originalNum = n;
	int armNum = 0;
	int digit;
	while (n > 0)
	{
		digit = n % 10;
		armNum = armNum + pow(digit, 3);
		n = n / 10;
	}
	if (originalNum == armNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void printAllDivisor(int n)
{
	vector<int> ls;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			ls.emplace_back(i);
			if ((n / i) != i)
			{
				ls.emplace_back(n / i);
			}
		}
	}
	sort(ls.begin(), ls.end());
	for (vector<int>::iterator it = ls.begin(); it != ls.end(); it++)
	{
		cout << *(it) << endl;
	}
}

bool isPrime(int n)
{
	int count = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cout << i << endl;
			count++;
			if ((n / i) != i)
			{
				count++;
				cout << n / i << endl;
			}
		}
	}
	if (count == 2)
		return true;
	else
		return false;
}

int main()
{
	// counting digits
	int n;
	cin >> n;
	// ReverseDigits(n);
	// cout << endl;
	// cout<< palindrome(n);
	// cout << armstrong(n);
	// printAllDivisor(n);
	cout << endl;
	cout<< isPrime(n);

	return 0;
}
