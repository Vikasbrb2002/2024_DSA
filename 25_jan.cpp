#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(string &text1,string &text2,int i,int j,vector<vector<int> >& dp){
        if(i==text1.size() ) return 0;
        if(j==text2.size()) return 0;

        int ans=0;
        if(dp[i][j]!=-1) return dp[i][j];
       if(text1[i]==text2[j])
        ans=1+solve(text1,text2,i+1,j+1,dp);
        else {
            ans=max(solve(text1,text2,i+1,j,dp),solve(text1,text2,i,j+1,dp));
           
        }
        return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int  i=0,j=0;
        vector<vector<int> > dp(text1.size(),vector<int>( text2.size(),-1));
      return  solve(text1,text2,i,j,dp);

    }
};
int main(){
 Solution obj;
 string text1="abdec";
 string text2="ace";
 cout<<obj.longestCommonSubsequence(text1,text2);

return 0;
}