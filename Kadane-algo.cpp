#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
      
        // Your code here
        long long int cSum=0, maxSum=arr[0];
        for(long long int i=0; i<n; i++)
        {
            cSum+=arr[i];             
            maxSum=(cSum>maxSum ? cSum : maxSum);
            if(cSum<0) cSum=0;            
        }
        return maxSum;
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n;        
        int a[n];        
        for(int i=0;i<n;i++) cin>>a[i];
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
