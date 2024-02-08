#include<bits/stdc++.h>
using namespace std;
int squares(int n,vector<int> &dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];

    int ans=n;
    for(int i=1;i*i<=n;i++){
        int temp=i*i;
        ans=min(ans,1+squares(n-temp,dp));

    }
    dp[n]=ans;
    return dp[n];
}
int main(){
    int n=5;
 vector<int> dp(n+1,-1);
cout<<squares(n,dp);

return 0;
}