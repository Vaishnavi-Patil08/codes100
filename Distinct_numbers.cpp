#include <bits/stdc++.h>
using namespace std;

const long long int mod = 1e9 + 7;

int main()
{
    int n, ele;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        s.insert(ele);
    }
    cout << s.size();
    return 0;
}