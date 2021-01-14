#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		int* price = new int[p];
		string* name = new string[p];

		cin >> price[0] >> name[0];

		int max = price[0];
		string max_name = name[0];
		for (int j = 1; j < p; j++) {
			cin >> price[j] >> name[j];
			if (max < price[j]) {
				max = price[j];
				max_name = name[j];
			}
		}
		cout << max_name << endl;
	}
	return 0;
}