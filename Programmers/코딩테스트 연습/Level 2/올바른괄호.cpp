#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> input;
    int rest = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            input.push_back('(');
        }
        else if (input.size() > 0 && s[i] == ')') {
            input.pop_back();
        }
        else {
            rest++;
        }
    }

    if (input.size() != 0 || rest != 0) {
        answer = false;
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

    return answer;
}