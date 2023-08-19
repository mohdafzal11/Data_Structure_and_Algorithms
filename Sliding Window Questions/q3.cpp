// Count Occurences of Anagrams

// Question link:https:practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



class Solution{
public:
    bool isValid(int arr1[] , int arr2[]){
        for(int i=0 ; i<26 ; i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
     return true;
    }
    
	int search(string pat, string txt) {
	    // code here
	    int cnt=0;
	    int arr1[26]={0};
	    int arr2[26]={0};
	    for(int i=0 ; i<pat.length() ; i++){
	        int index=pat[i]-'a';
	        arr1[index]++;
	    }
	    int k=pat.length();
	    int j=0;
	    while(j<pat.length()){
	        int index=txt[j]-'a';
	        arr2[index]++;
	        j++;
	    }
	    if(isValid(arr1,arr2)){
	        cnt++;
	    }
	    while(j<txt.length()){
	       int newIndex=txt[j]-'a';
	       arr2[newIndex]++;
	       int oldIndex=txt[j-k]-'a';
	       arr2[oldIndex]--;
	       if(isValid(arr1,arr2)){
	           cnt++;
	       }
	       j++;
	    }
	    return cnt;
	    
	}

};



int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
