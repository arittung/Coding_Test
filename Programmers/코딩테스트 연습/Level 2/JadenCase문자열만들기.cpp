#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 32;
    }

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == ' ' && (s[i + 1] >= 'a' && s[i + 1] <= 'z')) {
            s[i + 1] -= 32;
        }
        else if (s[i] != ' ' && (s[i + 1] >= 'A' && s[i + 1] <= 'Z')) {
            s[i + 1] += 32;
        }
    }
    answer = s;
    return answer;
}