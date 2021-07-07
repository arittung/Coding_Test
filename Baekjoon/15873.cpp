#include <iostream>
using namespace std;

int main() {
	string num;
	cin >> num;
	if (num.size() == 2) {
		cout << (num[0] - '0') + (num[1] - '0') << endl;
	}
	else if(num.size()==3){
		

		if (num[1] == '0') {
			
			cout << 10 + (num[2] - '0') << endl;
		}
		else {

			cout << 10 + (num[0] - '0') << endl;
		}
	}
	else {
		cout << 20 << endl;
	}


	return 0;
}