#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Maxsum(int ind,vector<int> &arr,int &k,int &n,vector<int> &dp){
        if(ind==n) return 0;
        if(dp[ind]!=-1) return dp[ind];

        int len=0;
        int maxi=INT_MIN;
        int maxAns=INT_MIN;
        int sum=0;
        for(int j=ind;j<min(ind+k,n);j++){
            len++;
            maxi=max(arr[j],maxi);
            sum=(len*maxi)+Maxsum(j+1,arr,k,n,dp);
            maxAns=max(maxAns,sum);
        dp[ind]=maxAns;
        }
        return dp[ind];
     }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n,-1);

        return Maxsum(0,arr,k,n,dp);
    }
};
int main(){
 Solution obj;
 vector<int> nums={1,15,7,9,2,5,10};
 int k=3;
 cout<<obj.maxSumAfterPartitioning(nums,k);

return 0;
}