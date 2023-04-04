//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pt;
        for(int i=0;i<numRows;i++)
        {
            vector<int> val(i+1,1);
            for(int j=1;j<i;j++)
            {
                val[j]=pt[i-1][j-1]+pt[i-1][j];
            }
            pt.push_back(val);

        }
        return pt;
    }
};