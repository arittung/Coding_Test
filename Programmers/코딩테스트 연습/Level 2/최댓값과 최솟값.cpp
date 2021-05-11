#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> number;
    int i = 0;
    while (1) {
        vector<int> tmp;
        int num = 0;
        while (1) {
            if (s[i] == '-') {
                num = -1;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                if (num == -1) {
                    tmp.push_back((s[i] - 48) * (-1));
                }
                else {
                    tmp.push_back(s[i] - 48);
                }
            }
            else {
                break;
            }
            i++;
        }
        int n = 0;
        for (int i = 0; i < tmp.size(); i++) {
            n += (tmp[i] * pow(10, tmp.size() - 1 - i));
        }
        number.push_back(n);
        i++;
        if (i >= s.size()) {
            break;
        }
    }
    sort(number.begin(), number.end());
    answer += to_string(number[0]);
    answer += ' ';
    answer += to_string(number.back());


    return answer;
}