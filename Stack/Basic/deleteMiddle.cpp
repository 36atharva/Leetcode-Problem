#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &st)
{
    vector<int> temp;
    int size = st.size();
    int mid = size / 2;
    while (mid)
    {
        temp.push_back(st.top());
        st.pop();
        mid--;
    }
    st.pop();
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        st.push(temp[i]);
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    deleteMiddle(st);

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}