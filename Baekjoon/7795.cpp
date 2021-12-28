#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
//		int* a = new int[n];
//		int* b = new int[m];
		vector<int> a;
		vector<int> b;
		for (int i = 0; i < n; i++) {
			int s;
			cin >> s;
			a.push_back(s);
		}
		for (int i = 0; i < m; i++) {
			int s;
			cin >> s;
			b.push_back(s);
		}

		int cnt = 0;
		sort(a.begin(),a.end());
		sort(b.rbegin(), b.rend());
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < m; i++) {
			cout << b[i] << " ";
		}
		cout << endl;


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] > b[j]) {
					cout << a[i] << " " << b[j]<< " ";

					cnt+= (m-j);
					cout << m - j << " "<<cnt << endl;
					break;

				}
			}
		}
		cout << cnt << endl;


	}



	return 0;
}