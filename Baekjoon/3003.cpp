#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> white(6, 0);
	int arr[6] = { 1, 1, 2, 2, 2, 8 };
	for (int i = 0; i < 6; i++) {
		int a;
		cin >> a;
		if (a != arr[i]) {
			white[i] = arr[i] - a;
		}
		
	}
	
	for (int i = 0; i < 6; i++) {
		cout << white[i] << " ";
	}
	cout << endl;
	return 0;
}