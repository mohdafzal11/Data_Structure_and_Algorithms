// Question :0 - 1 Knapsack Problem

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int solve(int w , int wt[] , int val[] , int n , vector<vector<int>> &dp){
       if(n<0 || w==0)return 0;
       if(dp[n][w]!=-1)return dp[n][w];
       
       if(wt[n]<=w){
           return dp[n][w]=max(val[n]+solve(w-wt[n] , wt , val,n-1,dp),solve(w , wt , val,n-1,dp));
       }
       return dp[n][w]=solve(w , wt , val,n-1,dp);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp (n+1 , vector<int>(W+1 , -1));
       int ans=solve(W , wt, val , n-1, dp);
       return ans;
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
