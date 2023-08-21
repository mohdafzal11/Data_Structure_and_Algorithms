// Smallest distinct window

// Question link:https://practice.geeksforgeeks.org/problems/smallest-distant-window3132/1?page=1&category[]=sliding-window&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int findSubString(string str)
    {
    unordered_map<char , int> mp;
    unordered_map<char , int> arr;

    int j=0;
    int mini=INT_MAX;
    for(int i=0 ; i<str.length() ; i++){
        arr[str[i]]++;
    }
        int i=0;
    while(j<str.length()){
        mp[str[j]]++;
        if(mp.size()<arr.size()){
            j++;
        }
        else if(mp.size()==arr.size()){
            while(mp.size()==arr.size()){
                mini=min(mini,j-i+1);
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    mp.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    return mini;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
