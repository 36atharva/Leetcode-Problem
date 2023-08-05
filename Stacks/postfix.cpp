#include <iostream>
#include <stack>
using namespace std;

string res = "";

int prec(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s)
{

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            res += c;
        }
        else if (c == '(')
        {
            st.push('(');
        }
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(c))
            {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
}

int main()
{
    string s = "(a*b)+(c-d)*e";
    infixToPostfix(s);
    cout << res;
    return 0;
}