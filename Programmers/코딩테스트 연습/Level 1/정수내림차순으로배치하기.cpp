#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string tmp_str = to_string(n);
    vector<int> tmp_n;
    for (int i = 0; i < tmp_str.size(); i++) {
        tmp_n.push_back(int(tmp_str[i]) - 48);
    }
    sort(tmp_n.begin(), tmp_n.end());
    for (int i = 0; i < tmp_n.size(); i++) {
        answer += (tmp_n[i] * pow(10, i));
    }
    return answer;
}