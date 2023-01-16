#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int A, B, C, D, sum=0;
		
			cin >> A >> B >> C >> D;
			sum = A;
			

				if ((D - B) > 0)
				{
					sum += (D - B) * C;
				}
				cout << sum;
			
	

		return EXIT_SUCCESS;
}