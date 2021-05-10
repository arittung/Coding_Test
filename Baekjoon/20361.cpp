#include <iostream>
using namespace std;
/*
void print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	cout << "---------------" << endl;
}
*/
int main() {
	int n, x, k;
	cin >> n;
	cin >> x;
	cin >> k;
	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		num[i] = 0;
	}
	num[x - 1] = 1;
	//print(num, n);
	
	for (int i = 0; i < k; i++) {
		int num1, num2;
		cin >> num1;
		cin >> num2;
		int tmp = num[num1 - 1];
		num[num1 - 1] = num[num2 - 1];
		num[num2 - 1] = tmp;
		//print(num, n);
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		if (num[i] == 1) {
			result = i;
			break;
		}
	}
	cout << result + 1 << endl;
	return 0;

}