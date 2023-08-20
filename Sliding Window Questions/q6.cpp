// Longest Distinct characters in string

// Question link:https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}




int longestSubstrDistinctChars (string S)
{
    int i=0;
    int j=0;
    int maxi=0;
    map<char,int> mp;
    while(j<S.length()){
       mp[S[j]]++;
       if(mp.size()==(j-i+1)){
            maxi=max(maxi,j-i+1);
           j++;
          
       }
       else if(mp.size()<(j-i+1)){
           while(mp.size()<(j-i+1)){
               mp[S[i]]--;
               if(mp[S[i]]==0){
                   mp.erase(S[i]);
               }
               i++;
           }
           j++;
           
       }
        
    }
    return maxi;
}