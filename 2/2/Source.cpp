#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;

int main() {
	int n, r = 2;
	int rez = 0;
	int s = 1;
	cout << "Enter n: ";
	cin >> n;
	if (n == 1 && n == 0)
	{
		rez = 0;
	}
	else if (n == 2)
	{
		rez = 1;
	}
	else
	{
		while (n > r)
		{
			r = r * 2;
			s += 1;
		}
		rez = s;
	}
	cout << rez;
	return EXIT_SUCCESS;
}
