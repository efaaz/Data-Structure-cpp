#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;

int prec(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return -1;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

string infixToPostfix(string s) {
    Stack<char> st(s.length());
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9') {
            res += s[i];
        }
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!st.isEmpty() && st.peek() != '(') {
                res += st.peek();
                st.pop();
            }
            if (!st.isEmpty()) {
                st.pop();
            }
        }
        else if (isOperator(s[i])) {
            while (!st.isEmpty() && prec(st.peek()) >= prec(s[i])) {
                res += st.peek();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.isEmpty()) {
        res += st.peek();
        st.pop();
    }
    
   

    return res;
}

int main() {
    string infix = "2*3/(2-1)+5*3";
    string postfix = infixToPostfix(infix);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    return 0;
}

