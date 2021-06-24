#include <iostream>
using namespace std;

int main() {
	int l;
	cin >> l;
	int cnt = 0;
	cnt += (l / 5);
	if (l % 5 != 0) {
		cnt++;
	}
	
	cout << cnt << endl;
	return 0;
}