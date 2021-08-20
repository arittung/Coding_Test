#include <iostream>
#include <string>
using namespace std;

int main() {
	string h;
	cin >> h;

	string n;
	cin >> n;


	int idx;
	int sum = 0;
	while (1) {
		if (h.find(n) == string::npos) {
			break;
		}

		idx = h.find(n);
		sum++;
		h.erase(idx, n.size());
	}
	
	cout << sum << endl;
	

	return 0;
}