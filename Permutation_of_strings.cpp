//https://www.hackerrank.com/challenges/permutations-of-strings/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    int i=n-1;
    while(i>0 && (strcmp(s[i-1],s[i])>=0))
        i--;
    if(i<=0)
        return 0;
    int j=n-1;
    while(strcmp(s[i-1],s[j])>=0)
        j--;
    
    char *temp=s[i-1];
    s[i-1]=s[j];
    s[j]=temp;
    
    j=n-1;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    
    return 1;





 /**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
}

