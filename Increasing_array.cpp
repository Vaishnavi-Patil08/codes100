//https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
     long long int arr[n];
    for ( long long int i = 0; i < n; i++)
        cin >> arr[i];
     long long int total = 0, m = arr[0];
    for ( long long int i = 1; i < n; i++)
    {
        total += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout << total;
    return 0;
}