//https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, num, sum = 0,ans;
    cin >> n;

    for (int i = 0 ; i < n - 1 ; i++) 
    {
        cin >> num;
        sum = sum + num;
    }
    ans =( n * (n + 1) ) / 2 - sum;
    cout << ans << endl;

    return 0;
}