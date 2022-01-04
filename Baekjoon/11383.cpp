#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> res;
    for (int i = 0; i < n; i++) {
        string str, str2;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            
            str2 += str[j];
            str2 += str[j];
            
        }
        
        res.push_back(str2);
    }

    int check = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str.compare(res[i]) != 0) {
            check = 1;
            break;
        }

        
    }
    if (check == 1) {
        cout << "Not Eyfa" << endl;
    }
    else {
        cout << "Eyfa" << endl;
    }
    return 0;
}