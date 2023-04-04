//https://practice.geeksforgeeks.org/problems/sort-a-stack/0

void order(int ele, stack<int>&s)
{
    if(s.size()==0 || s.top()<ele)
        s.push(ele);
    else
    {
        int ele1=s.top();
        s.pop();
        order(ele,s);
        s.push(ele1);
    }
}
void reverseStack(stack<int> &s)
{
    if(s.size()>0)
    {
        int ele=s.top();
        s.pop();
        reverseStack(s);
        order(ele,s);
    }
}


void SortedStack :: sort()
{
    reverseStack(s);
   //Your code here
}
