//https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<string>vec;
map<string,string>mp;

void insert_mp(string &attr, string &val)
{
    string name;
    for( string &str2:vec)
    {
        name+=str2+".";
    }
    name.pop_back();//pops last dot i.e tag1.tag2. -> tag1.tag2
    name+="~"+attr;
    mp[name]=val;
    
}

int main() 
{
    int n,q;
    cin>>n>>q;
    
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        
        if(cin.peek() == '/')
        {
            string str1;
            cin>>str1;
            vec.pop_back();
        }
        else
        {
            string tag;
            cin>>tag;
            
            if(tag.back()=='>')
            {
                tag.pop_back();
                vec.push_back(tag);
            }
            else
            {
                vec.push_back(tag);
                
                for(;;)
                {
                    string attr,val,eq;
                    cin>>attr;
                    cin>>eq;
                    cin>>val;
                    if(val.back()=='>')
                    {
                        val.pop_back(); //pop'>'
                        val.pop_back(); //pop' " ' . val= "HelloWorld
                        val=val.substr(1); //start from index 1 == HelloWorld.
                        insert_mp(attr,val);
                        break;
                    }
                    else
                    {
                        val.pop_back();//pop "
                        val=val.substr(1);
                        insert_mp(attr,val);
                    }
                        
                }
            }
                
        } 
       
    }
    
    for(int i=0;i<q;i++)
    {
        string qry;
        cin>>qry;
        if(mp.find(qry)!=mp.end())
            cout<<mp[qry]<<endl;
        else
            cout<<"Not Found!"<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
