#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> num;
    int i = 0;
    while (1) {
        if (s[i] == '-') {
            i++;
            num.push_back(int(s[i]) * (-1));
        }
        else if (s[i] != ' ') {
            num.push_back(int(s[i]));
        }
        i++;
        if (i >= s.size()) {
            break;
        }
    }

    sort(num.begin(), num.end());
    for (int i = 0; i < num.size() - 1; i++) {
        answer += to_string(num[i]);
        answer += ' ';
    }
    answer += to_string(num[num.size() - 1]);
    return answer;
}