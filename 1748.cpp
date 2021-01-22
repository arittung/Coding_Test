#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int sum = 0;

	int num = to_string(n).size();
	//cout << num << endl;

	for (int i = 0; i < num-1; i++) {
		sum += ((i+1) * (9 * pow(10, i)));
		//cout << sum << endl;
	}

	sum += (num * (n - (pow(10, num-1))+1));
	

	cout << sum << endl;
	return 0;
}