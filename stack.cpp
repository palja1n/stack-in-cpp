#include <iostream>
using namespace std;
#define MAX 5

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!\n";
            return;
        } else {
            arr[++top] = val;
            cout << val << " inserted into stack\n";
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!\n";
            return;
        } else {
            cout << "Removed top element from stack\n";
            top--;
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Current Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Trying to push 6th element:\n";
    s.push(60);

    cout << endl;
    s.display();

    cout << endl;
    s.pop();
    s.display();

    cout << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout << endl;
    s.display();

    return 0;
}

/*
Expected Output:
10 inserted into stack
20 inserted into stack
30 inserted into stack
40 inserted into stack
50 inserted into stack
Trying to push 6th element:
Stack Overflow!

Current Stack: 10 20 30 40 50
Removed top element from stack
Current Stack: 10 20 30 40

Removed top element from stack
Removed top element from stack
Removed top element from stack
Removed top element from stack
Stack Underflow!

Stack is empty
*/
