#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool check(int num) {
	if (num < 2) {
		return false;
	}
	int a = (int)sqrt(num);
	for (int i = 2; i <= a; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		
		int n, a, b;
		cin >> n;
		int divn = n / 2;
		if (check(divn) == true) {
			a = divn;
			b = divn;
		}
		else {
			a = divn;
			b = divn;
			while (1) {
				a--;
				b++;
				if (check(a) == true && check(b) == true) {
					break;
				}

			}
			
		}
		cout << a << " " << b << endl;
	}
	return 0;
}