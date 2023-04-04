//https://leetcode.com/contest/weekly-contest-332/problems/find-the-array-concatenation-value/

class Solution{
public:
    long long findTheArrayConcVal(vector<int>& nums) 
    {
         long long int cc=0;
       while(nums.size()>1)
       {
           vector<int> :: iterator it=nums.begin();
           int f=*it;
           string s1=to_string(f);
           it=nums.end()-1;
           int l=*it;
           string s2=to_string(l);
           string s=s1+s2;
           int c=stoi(s);
           cc=cc+c;
           nums.pop_back();
           nums.erase(nums.begin());
            
       }
        if(nums.size()==1)
        {
            cc=cc+nums[0];
        }
        
        return cc;
        
        
    }
};