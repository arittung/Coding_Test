#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	vector<int> num;

	int i = 0;

	int c = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			c++;
		}
	}
	
	vector<int> n;
	while (1) {
		if (i >= str.size()) {
			int a = 0;
			for (int j = 0; j < n.size(); j++) {

				a += n[j] * pow(10, n.size() - j - 1);
			}
			num.push_back(a);
			break;
		}
		
		if (str[i] != ',') {
			n.push_back(str[i] - '0');
		}
		else {
			int a = 0;
			for (int j = 0; j < n.size(); j++) {
				
				a += n[j]*pow(10, n.size() - j - 1);
			}
			num.push_back(a);
			n.clear();
		}

		i++;
		
	}
	/*
	for (int i = 0; i < num.size(); i++) {
		cout << num[i]<< " ";
	}
	cout << endl;
	*/

	int sum = 0;
	for (int i = 0; i < num.size(); i++) {
		sum += num[i];
	}
	cout << sum << endl;
	return 0;
}