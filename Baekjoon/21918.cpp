# include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> light;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		light.push_back(a);
	}
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			light[b-1] = c;
		}
		else {
			if (a == 2) {
				for (int j = b-1; j < c; j++) {
					if (light[j] == 1) {
						light[j] = 0;
					}
					else {
						light[j] = 1;
					}
				}
			}
			else if (a == 3) {
				for (int j = b - 1; j < c; j++) {
					light[j] = 0;
					
				}

			}
			else {
				for (int j = b - 1; j < c; j++) {
					light[j] = 1;

				}

			}
		}
		/*
		for (int j = 0; j < n; j++) {
			cout << light[j] << " ";
		}
		cout << endl;*/
	}

	for (int i = 0; i < n; i++) {
		cout << light[i] << " ";
	}
	cout << endl;

	return 0;
}