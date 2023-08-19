
// Q1.Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.
 
//  Question link: https:practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0;
        int j=0;
        
        long maxi=0;
        long sum=0;
        
        while(j<N){
            sum=sum+Arr[j];
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                maxi=max(maxi,sum);
                sum=sum- Arr[i];
                i++;
                j++;
            }
        }
    return maxi;
    }
};