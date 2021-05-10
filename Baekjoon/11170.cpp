#include <iostream>
#include <string>
using namespace std;

int checkzero(int num1, int num2) {
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		string n = to_string(i);
		for (int j = 0; j < n.size(); j++) {
			if (n[j] == '0') {
				sum++;
				//cout << n << endl;
				
			}
		}
	}
	return sum;
}


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		
		cout << checkzero(n, m) << endl;
	}
	return 0;
}