#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int el)
{

    // base case:
    if (s.empty())
    {
        s.push(el);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, el);

    s.push(num);
}

int main()
{

    stack<int> s;
    vector<int> arr;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    solve(s, 6);

    // Original stack: 1,2,3,4,5 Resultant stack: 3,1,2,4,5

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}