//https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem

#include<bits/stdc++.h>

using namespace std;

void get_prime_no(int * prime)
{
    int i,j,count=0;

    for( i=2; i<10000; i++)
    {
        for( j=2; j<=i; j++)
        {
            if(i%j==0)
            {break;}
        }

        if(j==i)
        {prime[count++]=i;}

        if(count==26)
        {break;}
    }
}


int main()
{
    int testcase;
    string str;
    cin>>testcase;

    int * prime;  
    prime = new int[26];
    get_prime_no(prime);

    while(testcase--)
    {
        cin>>str;
        int ch;
       
        int range; 
        long key=1;
        int result=0;
        int length=str.length();
        
        unordered_map<long, int> map;
        unordered_map<long, int>:: iterator itr;

        for (int i = 1; i <= length; ++i)
        {
            for (int j = 0; j <= length-i; ++j)
            {
                range=i+j-1;
                key=1;
                    
                for (int k = j; k <= range; ++k)
                {
                    ch=str[k]-97;
                    
                    key= ((prime[ch]*key)%10000000007);

                }
                
                map[key]+=1;
            }
        }

        for (itr=map.begin(); itr!=map.end();itr++)
        {
            int value= itr->second;

            if(value>=2){
            result+=((value)*(value-1))/2;
            }
        }

        cout<<result<<endl;

    }
    return 0;
}
