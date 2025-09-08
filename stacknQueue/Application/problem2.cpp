#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;

bool validityChecker(string s)
{
    Stack<char> st(s.length());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.isEmpty())
            {
                return false;
            }

            char top = st.peek();
            if ((s[i] == ')' && top == '(') ||
                (s[i] == '}' && top == '{') ||
                (s[i] == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (st.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "(a+b)";
    if (validityChecker(s))
    {
        cout << "The expression is valid." << endl;
    }
    else
    {
        cout << "The expression is not valid." << endl;
    }
    return 0;
}