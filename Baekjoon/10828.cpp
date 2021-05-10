#include <iostream>
using namespace std;


#define MAX_STACK_SIZE 10000

inline int error(const char* str) { 
    std::cerr << str << "\n"; // ������ ���� std::cerr�� ����մϴ�.
    exit(1);
}; 

class ArrayStack {
private:
    int    data[MAX_STACK_SIZE]; // ����� �迭
    int    top; // ����� ����

public:
    ArrayStack() { top = -1; }
    ~ArrayStack() {}
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_STACK_SIZE - 1; }
    int size() {
        return top+1;
    }
    void push(int e) {
        if (isFull()) error("���� ��ȭ ����");
        data[++top] = e;
    }

    int pop() {
        if (isEmpty()) error("���� ���� ����");
        return data[top--];
    }

    int peek() {
        if (isEmpty()) error("���� ���� ����");
        return data[top];
    }

    void display() {
        std::cout << "[���� �׸��� �� = " << top + 1 << "] ";
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