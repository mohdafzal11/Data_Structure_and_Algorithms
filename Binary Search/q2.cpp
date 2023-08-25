// First and last occurrences of x
// Question link:https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=3&category[]=Arrays&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int first(int arr[] , int n,int x){
        int ans=-1;
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==x){
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    
    
     int last (int arr[] , int n,int x){
        int ans=-1;
        int s=0;
        int e=n-1;
        while(s<=e){
             int mid=s+(e-s)/2;
            if(arr[mid]==x){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int f=first(arr,n,x);
        int l=last(arr,n,x);
        return {f,l};
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}




