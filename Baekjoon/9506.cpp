#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (1) {
		int n, sum = 0;
		cin >> n;
		if (n == -1) {
			break;
		}
		vector<int> arr;
		
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				arr.push_back(i);
				sum += i;
			}
		}
		
		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < arr.size()-1; i++) {
				cout << arr[i] << " + ";
			}
			
			cout<<arr[arr.size()-1] << endl;
		}
		else {
			
			cout << n << " is NOT perfect." << endl;
		}
	}
	return 0;
}