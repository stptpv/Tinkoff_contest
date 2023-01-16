#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int t;
	
	
	cin >> n;
	cin >> t;
	vector<int> mas;
	int buf;
	for (int i = 0; i < n; i++) {
		cin >> buf;
		mas.push_back(buf);
	}

	int no;
	cin >> no;

	int leaveFloor = mas[no - 1];
	int maxFloor = mas[n - 1];
	int minFloor = mas[0];
	int otvet = 0;

	if (leaveFloor - minFloor >t && (maxFloor - leaveFloor)>t) {
		int timeAfterStartFloor = 0;
		if (maxFloor - leaveFloor >= leaveFloor - minFloor) {
			timeAfterStartFloor =leaveFloor - minFloor;
			otvet+= timeAfterStartFloor;
		}
		else {
			timeAfterStartFloor = maxFloor - leaveFloor;
			otvet += timeAfterStartFloor;
		}
	}
	otvet+= mas[n - 1] - mas[0];

	cout << otvet<<endl;
	
	return 0;
}