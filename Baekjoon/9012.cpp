#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<char> st;
		string str;
		cin >> str;
		bool check = true;

		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				st.push(str[j]);
			}
			else if(str[j] == ')'){

				if (st.size() != 0 ) {
					st.pop();
				}
				else {
					check = false;
					break;
				}
				
			}
		}
		if (check == false || st.size() != 0) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	
	return 0;
	
}