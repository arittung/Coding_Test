#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	string str;
	cin >> n >> str;
	int c = str.size() / n;

	vector<vector<char>> ss(c, vector<char>(n, '0'));
	int k = 0;
	//n = 3, c = 4
	for (int i = 0; i < c; i++) {
		int j;
		if (i % 2 == 0) {
			for (j = 0; j < n; j++) {
				//cout << j << "," << i << endl;
				ss[i][j] = str[k];
				k++;
			}
		}
		else {
			for (j = n-1; j >=0; j--) {
				//cout << j << "," << i << endl;
				ss[i][j] = str[k];
				k++;
			}
		}
		
	}

	/*
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < n; j++) {
			cout << ss[i][j];
		}
		cout << endl;
	}
	*/

	string code = "";

	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < c; j++) {
			code += ss[j][i];
		}
		
	}

	cout << code << endl;

	return 0;
}