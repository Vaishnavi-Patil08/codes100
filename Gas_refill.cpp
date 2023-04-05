#include<bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    if(nums.size()<=1)
        return 0;
    if(nums[0]<=0)
        return -1;
    int curm=nums[0];
    int fuel=nums[0];
    int jump=1;
    for(int i=1;i<nums.size()-1;i++)
    {
        curm=max(curm,i+nums[i]);
        fuel--;
        if(fuel==0)
        {
            if(curm<=i)
               return 0;
            jump++;
            fuel=curm-i;
        }
    }
    return jump;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> arr;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int res=jump(arr);
    cout<<res;
    return 0;
}