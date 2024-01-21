#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int collectMaxMoney(vector<int> &nums,int n,vector<int> &dp){
        if(n<0) return 0;
        if(n==0) return nums[0];
        if(dp[n]!=-1){
            return dp[n];
        }
        int include=collectMaxMoney(nums,n-2,dp)+nums[n];
        int exclude=collectMaxMoney(nums,n-1,dp)+0;
        dp[n]=max(include,exclude);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> dp(n+1,-1);
        return collectMaxMoney(nums,n,dp);
    }
};
int main(){
    Solution obj;
    vector<int> nums={1,2,3,1};
    cout<<obj.rob(nums)<<endl;

return 0;
}