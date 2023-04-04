//https://www.codechef.com/problems/PCYCLE

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],b[n],i, no_of_perm=0;
	for(i=1;i<=n;i++){
	    cin>>a[i];
	    b[i]=a[i];
	}
	
	for(i=1;i<=n;i++){
	    int k=i;
	    if(a[i]!=0){
	        no_of_perm++;
	        while(true){
	            int s=i;
	            
	            i=a[i];
	            a[s]=0;
	            if(i==k){
	                
	                break;
	            }
	        }
	    }
	}
	
	cout<<no_of_perm<<endl;
	
	for(i=1;i<=n;i++){
	    int k=i;
	    if(b[i]!=0){
	        no_of_perm++;
	        while(true){
	            int s=i;
	            cout<<i<<' ';
	            i=b[i];
	            b[s]=0;
	            if(i==k){
	                cout<<i<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}