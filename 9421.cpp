#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int h_c_num(int* arr, int n) {
	vector <int> tmp;
	while (1) {
		arr[0] = n / 1000000;
		arr[1] = (n % 1000000) / 100000;
		arr[2] = (n % 100000) / 10000;
		arr[3] = (n % 10000) / 1000;
		arr[4] = (n % 1000) / 100;
		arr[5] = (n % 100) / 10;
		arr[6] = n % 10;

		int sum = 0;
		for (int i = 0; i < 7; i++) {
			sum += pow(arr[i], 2);
		}
		if (sum == 1) {
			return 1;
			break;
		}
		else {
			n = sum;
			cout <<"n : "<< n << endl;
			tmp.push_back(n);
		}
		if (tmp.size() >= 1000) {
			return 0;
			break;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int arr[7] = { 0,0 };
	vector<int> num;
	
	for (int i = 2; i <= n; i++) {
		int cnum = 0;
		for (int j = 2; j <= sqrt(i); j++) {	// 소수인지 아닌지 판별
			if (i % j == 0) {	//소수가 아니라면
				cnum = 1;
				break;
			}
		}
		if (cnum == 0) {
			if (1 == h_c_num(arr, i)) {	// 상근수라면
				num.push_back(i);
			}
		}
	}

	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << endl;
	}
	return 0;

}