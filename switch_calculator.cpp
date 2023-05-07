#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else
        return 0;
}

string infixToPostfix(string infix) {
    string postfix = "";
    stack<char> st;

    for (char c : infix) {
        if (isdigit(c))
            postfix += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(')
                st.pop();
        }
        else {
            while (!st.empty() && priority(c) <= priority(st.top())) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

double evaluatePostfix(string postfix) {
    stack<double> st;

    for (char c : postfix) {
        if (isdigit(c))
            st.push(c - '0');
        else {
            double num2 = st.top();
            st.pop();
            double num1 = st.top();
            st.pop();

            switch (c) {
                case '+':
                    st.push(num1 + num2);
                    break;
                case '-':
                    st.push(num1 - num2);
                    break;
                case '*':
                    st.push(num1 * num2);
                    break;
                case '/':
                    st.push(num1 / num2);
                    break;
                default:
                    cout << "Invalid operator" << endl;
                    return 0;
            }
        }
    }

    return st.top();
}

int main() {
    string infix;
    cout<<"Enter what you want to solve : = ";
    getline(cin>>ws, infix);
    string postfix = infixToPostfix(infix);
    double result = evaluatePostfix(postfix);

    cout << infix << " = " << result << endl;

    return 0;
}