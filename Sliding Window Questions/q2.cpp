// Q2.First negative integer in every window of size k

// Question link:https:practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{

    vector<long long> ans;
    queue<long long> q;
    int i = 0;
    int j = 0;
    while (j < N)
    {
        if (A[j] < 0)
        {
            q.push(A[j]);
        }
        if (j - i + 1 < K)
        {
            j++;
        }
        else if (j - i + 1 == K)
        {
            if (q.size() == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(q.front());
                if (q.front() == A[i])
                {
                    q.pop();
                }
            }
            i++;
            j++;
        }
    }
    return ans;
}