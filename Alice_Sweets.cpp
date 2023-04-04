//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/alices-sweets-02b1336a/
#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
    {
    	cin >> A[i_A];
    }
    vector<int> B(N);
    for(int i_B = 0; i_B < N; i_B++)
    {
    	cin >> B[i_B];
    }
    vector<int> C(N);
    for(int i_C = 0; i_C < N; i_C++)
    {
    	cin >> C[i_C];
    }
 
   int d = INT_MAX; 
 
   
 
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    int u=0,v=0,w=0;
    int ru=0,rv=0,rw=0;
    while (u < N && v < N && w < N)
    {
        int min1 = min(A[u], min(B[v], C[w]));
        int max1 = max(A[u], max(B[v], C[w]));
 
        
        if (max1-min1 < d)
        {
             ru = u;
             rv = v;
             rw = w;
             d = max1-min1;
        }
 
        if (d == 0) 
            break;
 
        if (A[u] == min1) 
            u++;
        else if (B[v] == min1) 
            v++;
        else 
            w++;
    }
   int ans=abs(A[ru]-B[rv])+abs(A[ru]-C[rw])+abs(B[rv]-C[rw]);
   cout<<ans<<endl;

}