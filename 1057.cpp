#include <iostream>
using namespace std;

int check(int n) {
	if (n % 2 == 0) {
		n = n / 2;
	}
	else {
		n = n / 2 + 1;
	}
	return n;
}


int main() {
	int n, person1, person2;
	cin >> n >> person1 >> person2;
	int sum = 1;
	while (1) {
		//cout <<n << " " <<  person1 << " " << person2 << endl;
		if ((person1 == (person2 - 1)) && (person2 % 2 == 0)) {
			break;
		}
		if ((person2 == (person1 - 1)) && (person1 % 2 == 0)) {
			break;
		}
		else if(n == 1) {
			sum = -1;
			break;
		}

		n = check(n);
		person1 = check(person1);
		person2 = check(person2);

		sum++;
	}
	
	cout << sum << endl;
	
	return 0;
}