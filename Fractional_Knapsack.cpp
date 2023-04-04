//https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/0

class Solution
{
    public:
    
    static bool ratio(struct Item a, struct Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,ratio);
        int cw=W;
        double fval=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=cw)
            {
                cw=cw-arr[i].weight;
                fval=fval+arr[i].value;
            }
            else if(arr[i].weight>cw)
            {
                fval=fval+(arr[i].value*((double) cw/arr[i].weight));
                break;
            }
        }
        return fval;
        // Your code here
    }