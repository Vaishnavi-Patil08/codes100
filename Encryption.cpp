//https://www.hackerrank.com/challenges/encryption/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000
char str[MAXN];
char res[MAXN][MAXN];


int main(){
    string str;
    cin>>str;
    int len = str.length();
    int rw,cl;
   for(int i=1; i<=100; i++) 
   {
     if(i*i>=len) 
     {
         rw= i; 
         cl = i; 
         break;
     }     
     if(i*(i+1)>=len)
     {
         rw = i;
          cl = i+1; 
          break;
     }
   }
   int id = 0;
   for(int i=0; i<MAXN; ++i)
        for(int j=0; j<MAXN; ++j) 
            res[i][j] = '\0';
   for(int i=0; i<rw; ++i) 
        for(int j=0; j<cl; ++j) 
            res[i][j] = str[id++];
   for(int i=0; i<cl; ++i) {
      for(int j=0; res[j][i]!='\0'; ++j) 
            cout<<res[j][i];
      cout<<" ";
   } 
   
   return 0;
}