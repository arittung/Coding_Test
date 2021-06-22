#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> str;
    string res = "";
    int max = 0;
    for (int i = 0; i < 5; i++) {
        string tmp;
        cin >> tmp;
        str.push_back(tmp);
        if (max < str[i].size()) {
            max = str[i].size();
        }
    }

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < str[j].size()) {
                res += str[j][i];
            }
        }
        //cout << "result : " << res << endl;
    }

    cout << res << endl;

    return 0;
}