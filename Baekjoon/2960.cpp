#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> num;
	for (int i = 2; i <= n; i++) {
		num.push_back(i);
	}
	int sum = 0, i =0, tmp = num[0];
	while (1) {
		
		//print(num);
		//cout << num[i] << endl;
		if (num[i] != 0) {
			sum++;
		}
		if (sum == k) {
			break;
		}
		if (num[i] != 0) {
			num[i] = 0;
		}
		
		
		i += tmp;
		
		if (i > num.size()) {
			for (int j = 1; j < num.size(); j++) {
				if (num[j] != 0) {
					i = j;
					tmp = num[j];
					break;
				}
			}
		}
	}
	cout << num[i]<< endl;
	return 0;
}