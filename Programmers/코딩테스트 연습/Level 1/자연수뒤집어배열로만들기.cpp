#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string tmp = to_string(n);
    for (int i = tmp.size() - 1; i >= 0; i--) {
        //cout << tmp[i] << " " << int(tmp[i]) << endl;
        answer.push_back(tmp[i]-48);
        
    }
    return answer;
}

int main() {
    long long n = 12345;
    vector<int> result = solution(n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}