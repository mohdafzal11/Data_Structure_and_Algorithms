// Remove Consecutive Characters

// Question Link:https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1?page=1&category[]=Strings&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


#include <bits/stdc++.h> 
using namespace std; 



class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans="";
        if(S.length()==1){
            return S;
        }
        int i=0;
        int j=0;
        while(i<S.length()){
            while(S[i]==S[j] && j<S.length()){
                j++;
            }
            ans+=S[i];
            i=j;
        }
        return ans;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




