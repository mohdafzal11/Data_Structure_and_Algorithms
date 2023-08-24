// Second most repeated string in a sequence

// Question link:https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1?page=1&category[]=Strings&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions



#include<bits/stdc++.h>
using namespace std;



class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
       unordered_map<string,int> mp;
       for(int i=0 ; i<n ; i++){
           mp[arr[i]]++;
       }
       int maxi=-1;
       string ans;
       for(auto i:mp){
           if(i.second>maxi){
               maxi=i.second;
               ans=i.first;
           }
           
       }
       if(mp.size()==1){
           return "";
       }
       maxi=-1;
       mp.erase(ans);
         for(auto i:mp){
           if(i.second>=maxi){
               maxi=i.second;
               ans=i.first;
           }
           
       }
       return ans;
    }
       
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
