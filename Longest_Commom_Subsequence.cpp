class Solution {
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int lcs[text1.length()+1][text2.length()+1];
        for(int i=0;i<=text1.length();i++)
        {
            for(int j=0;j<=text2.length();j++)
            {              
                lcs[i][j]=0;
            }
        }

        for(int i=1;i<=text1.length();i++)
        {
            for(int j=1;j<=text2.length();j++)
            {              
                if(text1[i-1]==text2[j-1])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }

        return lcs[text1.length()][text2.length()];
        
    }
};