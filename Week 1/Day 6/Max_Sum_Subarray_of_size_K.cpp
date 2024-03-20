// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
        long long int max_sum = INT_MIN, sum = 0;
        
        for(int l=0, r=0; r < N; r++){
            sum += Arr[r];
            
            if(r - l+1 ==K){
                max_sum = max(sum, max_sum);
                sum -= Arr[l];
                l++;
            }
        }
        
        return max_sum;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
