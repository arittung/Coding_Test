#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int i = 0;

    while (i < seoul.size()) {
        if (seoul[i] == "Kim") {
            break;
        }
        i++;
    }
    answer = "�輭���� " + (to_string(i)) + "�� �ִ�";
    return answer;
}

