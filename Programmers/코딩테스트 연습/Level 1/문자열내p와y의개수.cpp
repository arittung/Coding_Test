#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pnum = 0, ynum = 0;
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    //cout << "Hello Cpp" << endl;
    int i = 0;
    cout << s.size() << endl;
    while (i < s.size()) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }

        if (s[i] == 'p') {
            pnum++;
        }
        else if (s[i] == 'y') {
            ynum++;
        }
        i++;
    }
    if (pnum != ynum) {
        answer = false;
    }
    return answer;
}
/*
int main() {
    cout << solution("pyy") << endl;
    return 0;
}*/