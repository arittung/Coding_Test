#include <iostream>
using namespace std;


#define MAX_STACK_SIZE 10000

inline int error(const char* str) { 
    std::cerr << str << "\n"; // 에러의 경우는 std::cerr로 출력합니다.
    exit(1);
}; 

class ArrayStack {
private:
    int    data[MAX_STACK_SIZE]; // 요소의 배열
    int    top; // 요소의 개수

public:
    ArrayStack() { top = -1; }
    ~ArrayStack() {}
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_STACK_SIZE - 1; }
    int size() {
        return top+1;
    }
    void push(int e) {
        if (isFull()) error("스택 포화 에러");
        data[++top] = e;
    }

    int pop() {
        if (isEmpty()) error("스택 공백 에러");
        return data[top--];
    }

    int peek() {
        if (isEmpty()) error("스택 공백 에러");
        return data[top];
    }

    void display() {
        std::cout << "[스택 항목의 수 = " << top + 1 << "] ";
        for (int i = 0; i <= top; i++)
            std::cout << "<" << data[i] << ">";
        std::cout << "\n";
    }
};


int main() {
    ArrayStack stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == "push") {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if (str == "top") {
            if (stack.isEmpty()) {
                cout << -1 << endl;
            }
            else {
                cout << stack.peek() << endl;
            }
        }
        else if (str == "size") {
            cout << stack.size() << endl;
        }
        else if (str == "empty") {
            cout << stack.isEmpty() << endl;
        }
        else if (str == "pop") {
            if (stack.isEmpty()) {
                cout << -1 << endl;
            }
            else {
                cout << stack.pop() << endl;
            }
        }
    }
    return 0;
}