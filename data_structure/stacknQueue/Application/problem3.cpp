#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}
bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}
int evaluatePostfix(string p) {
    Stack<int> st(p.length());

    for (int i = 0; i < p.length(); i++) {
        if (isDigit(p[i])) {
            st.push(p[i] - '0'); 
        }
        else if (isOperator(p[i])) {
            int a = st.peek(); 
            st.pop();
            int b = st.peek(); 
            st.pop();
            int result = 0;
            switch (p[i]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
                case '%': result = a % b; break;
            }
            st.push(result);
        }
    }
    return st.peek();
}

int main() {
    string postfix = "82/";
    int result = evaluatePostfix(postfix);
    cout << "Postfix Expression: " << postfix << endl;
    cout << "Evaluated Result: " << result << endl;
    return 0;
}