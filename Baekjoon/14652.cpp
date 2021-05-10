#include <iostream>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int num = k % m;
	
	
	for (int i = 0; i < n; i++) {
		
		if (k == (m * i + num)) {
			cout << i << " " << num << endl;
			break;
		}
	}
	

	return 0;
}