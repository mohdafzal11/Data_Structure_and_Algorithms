// Count the subarrays having product less than k

// Question link:https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1


#include <bits/stdc++.h>
using namespace std;



class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long ans=0;
        long long pro=1;
        if(k<=1)return 0;
        int i=0;
        int j=0;
        while(j<a.size()){
            pro*=a[j];
            while(pro>=k){
                pro/=a[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

