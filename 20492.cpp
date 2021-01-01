#include <iostream>
using namespace std;

int main() {
	double money;
	int money1, money2;
	cin >> money;
	money1 = money *(78.0 / 100);
	cout << money1 << " ";
	money2 = money * (80.0 / 100) + (money * (20.0 / 100) * (78.0 / 100));
	cout << money2 << endl;
	return 0;
}