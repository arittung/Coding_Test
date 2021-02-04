#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string str;
	vector<string> reverse;
	getline(cin, str);
	int i = 0;
	while (1) {
		if (i >= str.size()) {
			break;
		}

		if (str[i] == ' ') {
			//cout << "\' \'인 경우: " << i << endl;
			i++;
		}
		else if (str[i] == '<') {
			//cout << "<인 경우: " << i << endl;
			while (1) {
				i++;
				if (str[i] == '>') {
					//cout << ">인 경우: " << i << endl;
					i++;
					
					break;
				}
			}
		}
		else {
			//vector<char> tmp;
			int begin = i, end;
			while (1) {
				if (str[i] == ' ' || str[i] == '<' || i>=str.size()) {
					//i++;
					break;
				}
				i++;
				//tmp.push_back(str[i]);
			}
			end = i;

			
			int k = 0;
			//cout <<"scope: "<< begin << " " << (end - begin) / 2 << endl;
			for (int j = 0; j < ((end - begin) / 2); j++) {
				
				char tmpchar = str[begin+k];
				//cout << str[begin+k] << " "<<str[end - k-1] << endl;
				str[begin+k] = str[end - k-1];
				str[end - k-1] = tmpchar;
				//cout << str[begin+k] << " " << str[end - k-1] << endl;
				k++;
			}
			/*
			cout << begin << "-" <<end << endl;
			for (int j = begin; j <= end; j++) {
				cout << str[j];
			}
			cout << endl;
			*/
		}
	}
	cout << str << endl;

	return 0;
}