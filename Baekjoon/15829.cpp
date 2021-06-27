#include <iostream>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;

	long long int res = 0, r = 1;
	int mod = 1234567891;
		

	for (int i = 0; i < n; i++) {

		res = (res + ((str[i]-'a' + 1) * r)) % mod;
		r = (r * 31) % mod;
	}

	cout << res << endl;
	
	return 0;
}