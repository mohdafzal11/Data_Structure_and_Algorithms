// Maximum of all subarrays of size k

// Question Link:https:practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;




class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        list<int> lst;
        int i=0;
        int j=0;
        while(j<n){
            while( !lst.empty() && lst.back()<arr[j]){
                lst.pop_back();
            }
            lst.push_back(arr[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                ans.push_back(lst.front());
                if(lst.front()==arr[i]){
                    lst.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};



int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
