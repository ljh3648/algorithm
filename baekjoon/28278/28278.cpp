#include <iostream>
using namespace std;

class Cstack {
private:
    int* stack;
    int cap;
    int top;
public:
    Cstack(int cap = 1000000){
        stack = new int[cap];
        this->cap = cap;
        top = -1;
    }

    void pushStack(int x){ // 1
        if (top == cap) return;
        stack[++top] = x;
    }

    void two() { // 2
        if (top == -1) return;
        for(int i = top; i > 0; i--) {
            cout << "출력: " << stack[i] << "\n";
        }
    }

    int getSize() { // 3
        return top + 1;
    }

    bool isEmpty() { // 4
        return (top == -1);
    }

    int popStack(){ // 5
        if (top == -1) return -1;
        return stack[--top];
    }
};

int main(void) {
    Cstack s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int v;
        cin >> v;
        switch(v) {
            case 1:
                int x;
                cin >> x;
                s.pushStack(x);
                break;
            case 2:
                s.two();
                break;
            case 3:
                cout << "출력: " << s.getSize() << "\n";
                break;
            case 4:
                cout << "출력: " << s.isEmpty() << "\n";
                break;
            case 5:
                cout << "출력: " << s.popStack() << "\n";
                break;
        }
    }
    return 0;
}