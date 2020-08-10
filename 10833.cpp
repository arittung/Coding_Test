#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* student = new int[n];
	int* apple = new int[n];

	int total_apple = 0;
	for (int i = 0; i < n; i++) {
		cin >> student[i] >> apple[i];
		total_apple += (apple[i] - ((apple[i] / student[i])*student[i]));
	}

	cout << total_apple << endl;
	return 0;
	
}