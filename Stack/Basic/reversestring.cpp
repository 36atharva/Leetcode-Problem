#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    string ans;
    stack<char> st;
    for (auto ch : s)
    {
        st.push(ch);
    }

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main()
{
    string s = "Atharva";
    cout << reverse(s);

    return 0;
}