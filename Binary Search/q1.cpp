// Binary Search

// Question Link:https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article




#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k)return mid;
             else if(arr[mid]>k){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
    return -1;
    }
};


int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

